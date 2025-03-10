# Google Cloud Pub/Sub C++ Client Library

This directory contains an idiomatic C++ client library for interacting with
[Cloud Pub/Sub](https://cloud.google.com/pubsub/), an asynchronous
messaging service that decouples services that produce events from services
that process events.

While this library is **GA**, please note that the Google Cloud C++ client libraries do **not** follow
[Semantic Versioning](https://semver.org/).

## Supported Platforms

- Windows, macOS, Linux
- C++14 (and higher) compilers (we test with GCC >= 7.3, Clang >= 6.0, and
  MSVC >= 2017)
- Environments with or without exceptions
- Bazel (>= 4.0) and CMake (>= 3.5) builds

## Documentation

- Official documentation about the [Cloud Pub/Sub][cloud-pubsub-docs] service
- [Reference doxygen documentation][doxygen-link] for each release of this client library
- Detailed header comments in our [public `.h`][source-link] files

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/pubsub/publisher.h"
#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <project-id> <topic-id>\n";
    return 1;
  }

  std::string const project_id = argv[1];
  std::string const topic_id = argv[2];

  // Create a namespace alias to make the code easier to read.
  namespace pubsub = ::google::cloud::pubsub;
  auto publisher = pubsub::Publisher(
      pubsub::MakePublisherConnection(pubsub::Topic(project_id, topic_id)));
  auto id =
      publisher
          .Publish(pubsub::MessageBuilder{}.SetData("Hello World!").Build())
          .get();
  if (!id) throw std::runtime_error(id.status().message());
  std::cout << "Hello World published with id=" << *id << "\n";

  return 0;
} catch (std::exception const& ex) {
  std::cerr << "Standard exception raised: " << ex.what() << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

- Packaging maintainers or developers who prefer to install the library in a
  fixed directory (such as `/usr/local` or `/opt`) should consult the
  [packaging guide](/doc/packaging.md).
- Developers wanting to use the libraries as part of a larger CMake or Bazel
  project should consult the [quickstart guides](#quickstart) for the library
  or libraries they want to use.
- Developers wanting to compile the library just to run some of the examples or
  tests should read the current document.
- Contributors and developers to `google-cloud-cpp` should consult the guide to
  [setup a development workstation][howto-setup-dev-workstation].

## Installation

Please consult the [packaging guide](/doc/packaging.md) for detailed
instructions to install the Google Cloud C++ client libraries.
If your project uses [CMake](https://cmake.org) or [Bazel](https://bazel.build)
check the [quickstart](quickstart/README.md) example for instructions to use
this library in your project.

## Contributing changes

See [`CONTRIBUTING.md`](/CONTRIBUTING.md) for details on how to
contribute to this project, including how to build and test your changes
as well as how to properly format your code.

## Licensing

Apache 2.0; see [`LICENSE`](/LICENSE) for details.

[cloud-pubsub-docs]: https://cloud.google.com/pubsub/docs/
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-pubsub/latest/
[howto-setup-dev-workstation]: /doc/contributor/howto-guide-setup-development-workstation.md
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/pubsub
