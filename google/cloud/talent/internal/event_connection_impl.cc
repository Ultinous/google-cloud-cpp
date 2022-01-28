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
// source: google/cloud/talent/v4/event_service.proto

#include "google/cloud/talent/internal/event_connection_impl.h"
#include "google/cloud/talent/internal/event_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventServiceConnectionImpl::EventServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<talent_internal::EventServiceStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<talent::EventServiceRetryPolicyOption>()->clone()),
      backoff_policy_prototype_(
          options.get<talent::EventServiceBackoffPolicyOption>()->clone()),
      idempotency_policy_(
          options.get<talent::EventServiceConnectionIdempotencyPolicyOption>()
              ->clone()) {}

StatusOr<google::cloud::talent::v4::ClientEvent>
EventServiceConnectionImpl::CreateClientEvent(
    google::cloud::talent::v4::CreateClientEventRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateClientEvent(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::talent::v4::CreateClientEventRequest const& request) {
        return stub_->CreateClientEvent(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google