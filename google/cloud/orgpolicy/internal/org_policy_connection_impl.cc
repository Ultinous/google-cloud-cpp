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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/internal/org_policy_connection_impl.h"
#include "google/cloud/orgpolicy/internal/org_policy_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace orgpolicy_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyConnectionImpl::OrgPolicyConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<orgpolicy_internal::OrgPolicyStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), orgpolicy_internal::OrgPolicyDefaultOptions(
                                  OrgPolicyConnection::options()))) {}

StreamRange<google::cloud::orgpolicy::v2::Constraint>
OrgPolicyConnectionImpl::ListConstraints(
    google::cloud::orgpolicy::v2::ListConstraintsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<orgpolicy::OrgPolicyRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListConstraints(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::orgpolicy::v2::Constraint>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::orgpolicy::v2::ListConstraintsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::orgpolicy::v2::ListConstraintsRequest const&
                       request) {
              return stub->ListConstraints(context, request);
            },
            r, function_name);
      },
      [](google::cloud::orgpolicy::v2::ListConstraintsResponse r) {
        std::vector<google::cloud::orgpolicy::v2::Constraint> result(
            r.constraints().size());
        auto& messages = *r.mutable_constraints();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnectionImpl::ListPolicies(
    google::cloud::orgpolicy::v2::ListPoliciesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<orgpolicy::OrgPolicyRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::orgpolicy::v2::Policy>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::orgpolicy::v2::ListPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::orgpolicy::v2::ListPoliciesRequest const&
                       request) {
              return stub->ListPolicies(context, request);
            },
            r, function_name);
      },
      [](google::cloud::orgpolicy::v2::ListPoliciesResponse r) {
        std::vector<google::cloud::orgpolicy::v2::Policy> result(
            r.policies().size());
        auto& messages = *r.mutable_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnectionImpl::GetPolicy(
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetPolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
        return stub_->GetPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnectionImpl::GetEffectivePolicy(
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEffectivePolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const&
                 request) {
        return stub_->GetEffectivePolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnectionImpl::CreatePolicy(
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreatePolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
        return stub_->CreatePolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnectionImpl::UpdatePolicy(
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdatePolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
        return stub_->UpdatePolicy(context, request);
      },
      request, __func__);
}

Status OrgPolicyConnectionImpl::DeletePolicy(
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeletePolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
        return stub_->DeletePolicy(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_internal
}  // namespace cloud
}  // namespace google
