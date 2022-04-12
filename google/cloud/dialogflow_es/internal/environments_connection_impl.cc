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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/environments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsConnectionImpl::EnvironmentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::EnvironmentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          dialogflow_es_internal::EnvironmentsDefaultOptions(
              EnvironmentsConnection::options()))) {}

StreamRange<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnectionImpl::ListEnvironments(
    google::cloud::dialogflow::v2::ListEnvironmentsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<dialogflow_es::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListEnvironments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Environment>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::v2::ListEnvironmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::ListEnvironmentsRequest const&
                       request) {
              return stub->ListEnvironments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListEnvironmentsResponse r) {
        std::vector<google::cloud::dialogflow::v2::Environment> result(
            r.environments().size());
        auto& messages = *r.mutable_environments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnectionImpl::GetEnvironment(
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEnvironment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
        return stub_->GetEnvironment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnectionImpl::CreateEnvironment(
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::CreateEnvironmentRequest const&
                 request) {
        return stub_->CreateEnvironment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnectionImpl::UpdateEnvironment(
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::UpdateEnvironmentRequest const&
                 request) {
        return stub_->UpdateEnvironment(context, request);
      },
      request, __func__);
}

Status EnvironmentsConnectionImpl::DeleteEnvironment(
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::DeleteEnvironmentRequest const&
                 request) {
        return stub_->DeleteEnvironment(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
EnvironmentsConnectionImpl::GetEnvironmentHistory(
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<dialogflow_es::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->GetEnvironmentHistory(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::
                       GetEnvironmentHistoryRequest const& request) {
              return stub->GetEnvironmentHistory(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::EnvironmentHistory r) {
        std::vector<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
            result(r.entries().size());
        auto& messages = *r.mutable_entries();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google