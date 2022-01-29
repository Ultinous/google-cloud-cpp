// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CONNECTION_H

#include "google/cloud/appengine/internal/versions_retry_traits.h"
#include "google/cloud/appengine/internal/versions_stub.h"
#include "google/cloud/appengine/versions_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VersionsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    appengine_internal::VersionsRetryTraits>;

using VersionsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        appengine_internal::VersionsRetryTraits>;

using VersionsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        appengine_internal::VersionsRetryTraits>;

class VersionsConnection {
 public:
  virtual ~VersionsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::appengine::v1::Version> ListVersions(
      google::appengine::v1::ListVersionsRequest request);

  virtual StatusOr<google::appengine::v1::Version> GetVersion(
      google::appengine::v1::GetVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Version>> CreateVersion(
      google::appengine::v1::CreateVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Version>> UpdateVersion(
      google::appengine::v1::UpdateVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteVersion(google::appengine::v1::DeleteVersionRequest const& request);
};

std::shared_ptr<VersionsConnection> MakeVersionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::VersionsConnection> MakeVersionsConnection(
    std::shared_ptr<VersionsStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CONNECTION_H
