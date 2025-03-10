#!/usr/bin/env bash
#
# Copyright 2019 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -euo pipefail

BINDIR=$(dirname "$0")
readonly BINDIR

cat <<'END_OF_PREAMBLE'
# Packaging `google-cloud-cpp`

<!-- This is an automatically generated file -->

<!-- Make changes in ci/generate-markdown/generate-packaging.sh -->

This document is intended for package maintainers or for people who might like
to "install" the `google-cloud-cpp` libraries in `/usr/local` or a similar
directory.

- Packaging maintainers or developers who prefer to install the library in a
  fixed directory (such as `/usr/local` or `/opt`) should consult the current
  document.
- Developers wanting to use the libraries as part of a larger CMake or Bazel
  project should consult the [quickstart guides](/README.md#quickstart) for the
  library or libraries they want to use.
- Developers wanting to compile the library just to run examples or tests should
  consult the [building and installing](/README.md#building-and-installing)
  section of the top-level README file.
- Contributors and developers to `google-cloud-cpp` should consult the guide to
  [set up a development workstation][howto-setup-dev-workstation].

There are two primary ways of obtaining `google-cloud-cpp`. You can use git:

```bash
git clone https://github.com/googleapis/google-cloud-cpp.git $HOME/google-cloud-cpp
```

Or obtain the tarball release (see
https://github.com/googleapis/google-cloud-cpp/releases for the latest
release):

```bash
VERSION="vX.Y.Z"
mkdir -p $HOME/google-cloud-cpp
wget -q https://github.com/googleapis/google-cloud-cpp/archive/${VERSION}.tar.gz
tar -xf ${VERSION}.tar.gz -C $HOME/google-cloud-cpp --strip=1
```

# Installing `google-cloud-cpp`

<!-- This is an automatically generated file -->
<!-- Make changes in ci/generate-markdown/generate-packaging.sh -->

This document provides instructions to install the dependencies of
`google-cloud-cpp`.

**If** all the dependencies of `google-cloud-cpp` are installed and provide
CMake support files, then compiling and installing the libraries
requires two commands:

```bash
cmake -H. -Bcmake-out -DBUILD_TESTING=OFF -DGOOGLE_CLOUD_CPP_ENABLE_EXAMPLES=OFF
cmake --build cmake-out --target install
```

Unfortunately getting your system to this state may require multiple steps,
the following sections describe how to install `google-cloud-cpp` on several
platforms.

## Common Configuration Variables for CMake

As is often the case, the CMake build can be configured using a number of
options and command-line flags.  A full treatment of these options is outside
the scope of this document, but here are a few highlights:

- Consider using `-GNinja` to switch the generator from `make` (or msbuild on
  Windows) to [`ninja`][ninja-build]. In our experience `ninja` takes better
  advantage of multicore machines. Be aware that `ninja` is often not
  installed in development workstations, but it is available through most
  package managers.
- If you use the default generator, consider appending `-- -j ${NCPU}` to the
  build command, where `NCPU` is an environment variable set to the number of
  processors on your system. You can obtain this information using
  the `nproc` command on Linux, or `sysctl -n hw.physicalcpu` on macOS.
- By default, CMake compiles the `google-cloud-cpp` as static libraries. The
  standard `-DBUILD_SHARED_LIBS=ON` option can be used to switch this to shared
  libraries.  Having said this, on Windows there are [known issues][issues-5489]
  with DLLs and generated protos.
- With the default configuration, our CMake scripts will only compile a small
  subset of the libraries.  As the number of libraries grows, we did not want
  to impose longer build times on existing customers.
  - You can use the `-DGOOGLE_CLOUD_CPP_ENABLE=...` option to configure the set
    of libraries compiled and installed by CMake.
  - For example, passing `-DGOOGLE_CLOUD_CPP_ENABLE=storage` will only compile
    the `storage` library.  The target for this library is
    `google-cloud-cpp::storage`.
  - The `google/cloud/${library}/README.md` files describe what services are
    supported by each library.
  - You can provide more than one library. For example,
    `-DGOOGLE_CLOUD_CPP_ENABLE=pubsub;iam;speech` will compile the `pubsub`,
    `iam`, and `speech` libraries.
  - Be aware of how your shell treats semicolons and use appropriate quoting if
    needed.
  - The default is to compile `bigtable`, `bigquery`, `iam`, `logging`,
    `pubsub`, `spanner`, and `storage`.
  - Currently, there is no way to compile all libraries (see [#9333]).
  - The `storage` library does not depend on `gRPC` or `Protobuf`. Customers
    only using this library may want to customize their build.

To find out about other configuration options, consider using
[`ccmake`][ccmake], or `cmake -L`.

## Using `google-cloud-cpp` after it is installed

Once installed, follow any of the [quickstart guides](/README.md#quickstart) to
use `google-cloud-cpp` in your CMake or Make-based project. If you are planning
to use Bazel for your own project, there is no need to install
`google-cloud-cpp`, we provide `BUILD.bazel` files for this purpose. The
quickstart guides also cover this use-case.

## Required Libraries

`google-cloud-cpp` directly depends on the following libraries:

| Library                           |   Minimum version | Description                                                                                   |
|-----------------------------------|------------------:|-----------------------------------------------------------------------------------------------|
| [Abseil][abseil-gh]               | 20200923, Patch 3 | Abseil C++ common library (Requires >= `20210324.2` for `pkg-config` files to work correctly) |
| [gRPC][gRPC-gh]                   |            1.35.x | An RPC library and framework (not needed for Google Cloud Storage client)                     |
| [libcurl][libcurl-gh]             |            7.47.0 | HTTP client library for the Google Cloud Storage client                                       |
| [crc32c][crc32c-gh]               |             1.0.6 | Hardware-accelerated CRC32C implementation                                                    |
| [OpenSSL][OpenSSL-gh]             |             1.0.2 | Crypto functions for Google Cloud Storage authentication                                      |
| [nlohmann/json][nlohmann-json-gh] |             3.4.0 | JSON for Modern C++                                                                           |
| [protobuf][protobuf-gh]           |             v21.1 | C++ Micro-generator support                                                                   |

Note that these libraries may also depend on other libraries. The following
instructions include steps to install these indirect dependencies too.

When possible, the instructions below prefer to use pre-packaged versions of
these libraries and their dependencies. In some cases the packages do not exist,
or the packaged versions are too old to support `google-cloud-cpp`. If this is
the case, the instructions describe how you can manually download and install
these dependencies.
END_OF_PREAMBLE

# Extracts the part of a file between the BEGIN/DONE tags.
function extract() {
  sed -e '0,/^.*\[BEGIN packaging.md\].*$/d' \
    -e '/^.*\[DONE packaging.md\].*$/,$d' "$1"
}

# A "map" (comma separated) of dockerfile -> summary.
DOCKER_DISTROS=(
  "demo-alpine-stable.Dockerfile,Alpine (Stable)"
  "demo-fedora.Dockerfile,Fedora (36)"
  "demo-opensuse-leap.Dockerfile,openSUSE (Leap)"
  "demo-ubuntu-jammy.Dockerfile,Ubuntu (22.04 LTS - Jammy Jellyfish)"
  "demo-ubuntu-focal.Dockerfile,Ubuntu (20.04 LTS - Focal Fossa)"
  "demo-ubuntu-bionic.Dockerfile,Ubuntu (18.04 LTS - Bionic Beaver)"
  "demo-debian-bullseye.Dockerfile,Debian (11 - Bullseye)"
  "demo-debian-buster.Dockerfile,Debian (10 - Buster)"
  "demo-rockylinux-8.Dockerfile,Rocky Linux (8)"
  "demo-centos-7.Dockerfile,CentOS (7)"
)
for distro in "${DOCKER_DISTROS[@]}"; do
  dockerfile="$(cut -f1 -d, <<<"${distro}")"
  summary="$(cut -f2- -d, <<<"${distro}")"
  echo
  echo "<details>"
  echo "<summary>${summary}</summary>"
  echo "<br>"
  extract "${BINDIR}/../cloudbuild/dockerfiles/${dockerfile}" |
    "${BINDIR}/dockerfile2markdown.sh"
  echo "#### Compile and install the main project"
  echo
  echo "We can now compile and install \`google-cloud-cpp\`:"
  echo
  echo '```bash'
  extract "${BINDIR}/../cloudbuild/builds/demo-install.sh"
  echo '```'
  echo
  echo "</details>"
done

# Dump out the instructions for macOS
cat <<"EOF"
<details>
<summary>macOS</summary>
<br>

First install Xcode to get all the needed development tools. These instructions
also use [Homebrew](https://brew.sh/) to install the needed third-party
dependencies.

If you don't already have Xcode installed:
```bash
xcode-select --install
```

Follow the instructions at https://brew.sh to install Homebrew. Then install
the needed dependencies:

```bash
# Some additional build tools
brew install cmake ninja
# Installs google-cloud-cpp's needed deps
brew install abseil protobuf grpc nlohmann-json crc32c openssl@1.1
```

:warning: By default, Abseil's ABI changes depending on whether it is used
with C++ >= 17 enabled or not. Installing Abseil with the default
configuration is error-prone, unless you can guarantee that all the code using
Abseil (gRPC, google-cloud-cpp, your own code, etc.) is compiled with the same
C++ version. Homebrew's version of Abseil is compiled with C++17 and requires
that all dependencies are thus compiled. See [abseil/abseil-cpp#696], and the
[homebrew formula] for more information.

Now configure, build, and install the `google-cloud-cpp` libraries that you need.
In this example, we install the [storage][storage-link] and
[spanner][spanner-link] libraries.
```bash
cmake -S . -B cmake-out \
  -GNinja \
  -DGOOGLE_CLOUD_CPP_ENABLE="storage;spanner" \
  -DCMAKE_CXX_STANDARD=17 \
  -DCMAKE_BUILD_TYPE=release \
  -DBUILD_TESTING=OFF \
  -DOPENSSL_ROOT_DIR="$(brew --prefix openssl@1.1)" \
  -DCMAKE_INSTALL_PREFIX=/tmp/test-install
cmake --build cmake-out
cmake --build cmake-out --target install
```

</details>

[#9333]: https://github.com/googleapis/google-cloud-cpp/issues/9333
[OpenSSL-gh]: https://github.com/openssl/openssl
[abseil-gh]: https://github.com/abseil/abseil-cpp
[abseil/abseil-cpp#696]: https://github.com/abseil/abseil-cpp/issues/696
[ccmake]: https://cmake.org/cmake/help/latest/manual/ccmake.1.html
[crc32c-gh]: https://github.com/google/crc32c
[gRPC-gh]: https://github.com/grpc/grpc
[grpc-gh]: https://github.com/grpc/grpc
[homebrew formula]: https://github.com/Homebrew/homebrew-core/blob/HEAD/Formula/abseil.rb
[howto-setup-dev-workstation]: /doc/contributor/howto-guide-setup-development-workstation.md
[issues-5489]: https://github.com/googleapis/google-cloud-cpp/issues/5849
[libcurl-gh]: https://github.com/curl/curl
[ninja-build]: https://ninja-build.org/
[nlohmann-json-gh]: https://github.com/nlohmann/json
[openssl-gh]: https://github.com/openssl/openssl
[protobuf-gh]: https://github.com/protocolbuffers/protobuf
[spanner-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/spanner#readme
[storage-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/storage#readme
EOF
