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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INSTANCES_CONNECTION_H

#include "google/cloud/appengine/instances_connection_idempotency_policy.h"
#include "google/cloud/appengine/internal/instances_retry_traits.h"
#include "google/cloud/appengine/internal/instances_stub.h"
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

using InstancesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    appengine_internal::InstancesRetryTraits>;

using InstancesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        appengine_internal::InstancesRetryTraits>;

using InstancesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        appengine_internal::InstancesRetryTraits>;

class InstancesConnection {
 public:
  virtual ~InstancesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::appengine::v1::Instance> ListInstances(
      google::appengine::v1::ListInstancesRequest request);

  virtual StatusOr<google::appengine::v1::Instance> GetInstance(
      google::appengine::v1::GetInstanceRequest const& request);

  virtual future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteInstance(google::appengine::v1::DeleteInstanceRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Instance>> DebugInstance(
      google::appengine::v1::DebugInstanceRequest const& request);
};

std::shared_ptr<InstancesConnection> MakeInstancesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::InstancesConnection> MakeInstancesConnection(
    std::shared_ptr<InstancesStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INSTANCES_CONNECTION_H
