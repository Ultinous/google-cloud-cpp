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
// source: google/cloud/retail/v2/user_event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_USER_EVENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_USER_EVENT_CONNECTION_H

#include "google/cloud/retail/internal/user_event_retry_traits.h"
#include "google/cloud/retail/internal/user_event_stub.h"
#include "google/cloud/retail/user_event_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using UserEventServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        retail_internal::UserEventServiceRetryTraits>;

using UserEventServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        retail_internal::UserEventServiceRetryTraits>;

using UserEventServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        retail_internal::UserEventServiceRetryTraits>;

class UserEventServiceConnection {
 public:
  virtual ~UserEventServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::retail::v2::UserEvent> WriteUserEvent(
      google::cloud::retail::v2::WriteUserEventRequest const& request);

  virtual StatusOr<google::api::HttpBody> CollectUserEvent(
      google::cloud::retail::v2::CollectUserEventRequest const& request);

  virtual future<StatusOr<google::cloud::retail::v2::PurgeUserEventsResponse>>
  PurgeUserEvents(
      google::cloud::retail::v2::PurgeUserEventsRequest const& request);

  virtual future<StatusOr<google::cloud::retail::v2::ImportUserEventsResponse>>
  ImportUserEvents(
      google::cloud::retail::v2::ImportUserEventsRequest const& request);

  virtual future<StatusOr<google::cloud::retail::v2::RejoinUserEventsResponse>>
  RejoinUserEvents(
      google::cloud::retail::v2::RejoinUserEventsRequest const& request);
};

std::shared_ptr<UserEventServiceConnection> MakeUserEventServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<retail::UserEventServiceConnection>
MakeUserEventServiceConnection(std::shared_ptr<UserEventServiceStub> stub,
                               Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_USER_EVENT_CONNECTION_H
