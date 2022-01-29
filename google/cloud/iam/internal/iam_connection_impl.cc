// Copyright 2021 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/internal/iam_connection_impl.h"
#include "google/cloud/iam/internal/iam_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMConnectionImpl::IAMConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<iam_internal::IAMStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          iam_internal::IAMDefaultOptions(IAMConnection::options()))) {}

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMConnectionImpl::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServiceAccounts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::ServiceAccount>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::ListServiceAccountsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::iam::admin::v1::ListServiceAccountsRequest const&
                       request) {
              return stub->ListServiceAccounts(context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::ListServiceAccountsResponse r) {
        std::vector<google::iam::admin::v1::ServiceAccount> result(
            r.accounts().size());
        auto& messages = *r.mutable_accounts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnectionImpl::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceAccount(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::GetServiceAccountRequest const& request) {
        return stub_->GetServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnectionImpl::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceAccount(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::CreateServiceAccountRequest const& request) {
        return stub_->CreateServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnectionImpl::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->PatchServiceAccount(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::PatchServiceAccountRequest const& request) {
        return stub_->PatchServiceAccount(context, request);
      },
      request, __func__);
}

Status IAMConnectionImpl::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteServiceAccount(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
        return stub_->DeleteServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMConnectionImpl::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteServiceAccount(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::UndeleteServiceAccountRequest const&
                 request) {
        return stub_->UndeleteServiceAccount(context, request);
      },
      request, __func__);
}

Status IAMConnectionImpl::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->EnableServiceAccount(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::EnableServiceAccountRequest const& request) {
        return stub_->EnableServiceAccount(context, request);
      },
      request, __func__);
}

Status IAMConnectionImpl::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DisableServiceAccount(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::DisableServiceAccountRequest const& request) {
        return stub_->DisableServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMConnectionImpl::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ListServiceAccountKeys(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::ListServiceAccountKeysRequest const&
                 request) {
        return stub_->ListServiceAccountKeys(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnectionImpl::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceAccountKey(request),
      [this](
          grpc::ClientContext& context,
          google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
        return stub_->GetServiceAccountKey(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnectionImpl::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceAccountKey(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::CreateServiceAccountKeyRequest const&
                 request) {
        return stub_->CreateServiceAccountKey(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnectionImpl::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UploadServiceAccountKey(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::UploadServiceAccountKeyRequest const&
                 request) {
        return stub_->UploadServiceAccountKey(context, request);
      },
      request, __func__);
}

Status IAMConnectionImpl::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteServiceAccountKey(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::DeleteServiceAccountKeyRequest const&
                 request) {
        return stub_->DeleteServiceAccountKey(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> IAMConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> IAMConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

StreamRange<google::iam::admin::v1::Role>
IAMConnectionImpl::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->QueryGrantableRoles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::QueryGrantableRolesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::iam::admin::v1::QueryGrantableRolesRequest const&
                       request) {
              return stub->QueryGrantableRoles(context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::QueryGrantableRolesResponse r) {
        std::vector<google::iam::admin::v1::Role> result(r.roles().size());
        auto& messages = *r.mutable_roles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::iam::admin::v1::Role> IAMConnectionImpl::ListRoles(
    google::iam::admin::v1::ListRolesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListRoles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::iam::admin::v1::ListRolesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::iam::admin::v1::ListRolesRequest const& request) {
              return stub->ListRoles(context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::ListRolesResponse r) {
        std::vector<google::iam::admin::v1::Role> result(r.roles().size());
        auto& messages = *r.mutable_roles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::Role> IAMConnectionImpl::GetRole(
    google::iam::admin::v1::GetRoleRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetRole(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::GetRoleRequest const& request) {
        return stub_->GetRole(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMConnectionImpl::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateRole(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::CreateRoleRequest const& request) {
        return stub_->CreateRole(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMConnectionImpl::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateRole(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::UpdateRoleRequest const& request) {
        return stub_->UpdateRole(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMConnectionImpl::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteRole(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::DeleteRoleRequest const& request) {
        return stub_->DeleteRole(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMConnectionImpl::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteRole(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::UndeleteRoleRequest const& request) {
        return stub_->UndeleteRole(context, request);
      },
      request, __func__);
}

StreamRange<google::iam::admin::v1::Permission>
IAMConnectionImpl::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->QueryTestablePermissions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Permission>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::QueryTestablePermissionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::iam::admin::v1::QueryTestablePermissionsRequest const&
                    request) {
              return stub->QueryTestablePermissions(context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::QueryTestablePermissionsResponse r) {
        std::vector<google::iam::admin::v1::Permission> result(
            r.permissions().size());
        auto& messages = *r.mutable_permissions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMConnectionImpl::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->QueryAuditableServices(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::QueryAuditableServicesRequest const&
                 request) {
        return stub_->QueryAuditableServices(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::LintPolicyResponse>
IAMConnectionImpl::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->LintPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::admin::v1::LintPolicyRequest const& request) {
        return stub_->LintPolicy(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
