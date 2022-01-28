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
// source: google/cloud/retail/v2/catalog_service.proto

#include "google/cloud/retail/internal/catalog_connection_impl.h"
#include "google/cloud/retail/internal/catalog_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceConnectionImpl::CatalogServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<retail_internal::CatalogServiceStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<retail::CatalogServiceRetryPolicyOption>()->clone()),
      backoff_policy_prototype_(
          options.get<retail::CatalogServiceBackoffPolicyOption>()->clone()),
      idempotency_policy_(
          options
              .get<retail::CatalogServiceConnectionIdempotencyPolicyOption>()
              ->clone()) {}

StreamRange<google::cloud::retail::v2::Catalog>
CatalogServiceConnectionImpl::ListCatalogs(
    google::cloud::retail::v2::ListCatalogsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<retail::CatalogServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCatalogs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::retail::v2::Catalog>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::retail::v2::ListCatalogsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::retail::v2::ListCatalogsRequest const& request) {
              return stub->ListCatalogs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::retail::v2::ListCatalogsResponse r) {
        std::vector<google::cloud::retail::v2::Catalog> result(
            r.catalogs().size());
        auto& messages = *r.mutable_catalogs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceConnectionImpl::UpdateCatalog(
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCatalog(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::UpdateCatalogRequest const& request) {
        return stub_->UpdateCatalog(context, request);
      },
      request, __func__);
}

Status CatalogServiceConnectionImpl::SetDefaultBranch(
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetDefaultBranch(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
        return stub_->SetDefaultBranch(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceConnectionImpl::GetDefaultBranch(
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDefaultBranch(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
        return stub_->GetDefaultBranch(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google