// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_COMPUTE_ENGINE_UTIL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_COMPUTE_ENGINE_UTIL_H

#include "google/cloud/version.h"
#include <string>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

/// Returns the hostname for a GCE instance's metadata server.
std::string GceMetadataHostname();

inline char const* GceMetadataHostnameEnvVar() {
  static constexpr char kEnvVarName[] = "GCE_METADATA_ROOT";
  return kEnvVarName;
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_COMPUTE_ENGINE_UTIL_H
