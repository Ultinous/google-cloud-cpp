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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CONNECTION_H

#include "google/cloud/ids/ids_connection_idempotency_policy.h"
#include "google/cloud/ids/internal/ids_retry_traits.h"
#include "google/cloud/ids/internal/ids_stub.h"
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
namespace ids {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IDSRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    ids_internal::IDSRetryTraits>;

using IDSLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        ids_internal::IDSRetryTraits>;

using IDSLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        ids_internal::IDSRetryTraits>;

class IDSConnection {
 public:
  virtual ~IDSConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request);

  virtual StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
  DeleteEndpoint(google::cloud::ids::v1::DeleteEndpointRequest const& request);
};

std::shared_ptr<IDSConnection> MakeIDSConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace ids_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<ids::IDSConnection> MakeIDSConnection(
    std::shared_ptr<IDSStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CONNECTION_H
