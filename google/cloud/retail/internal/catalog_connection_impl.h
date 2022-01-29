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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_CATALOG_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_CATALOG_CONNECTION_IMPL_H

#include "google/cloud/retail/catalog_connection.h"
#include "google/cloud/retail/catalog_connection_idempotency_policy.h"
#include "google/cloud/retail/catalog_options.h"
#include "google/cloud/retail/internal/catalog_retry_traits.h"
#include "google/cloud/retail/internal/catalog_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CatalogServiceConnectionImpl : public retail::CatalogServiceConnection {
 public:
  ~CatalogServiceConnectionImpl() override = default;

  CatalogServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<retail_internal::CatalogServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::retail::v2::Catalog> ListCatalogs(
      google::cloud::retail::v2::ListCatalogsRequest request) override;

  StatusOr<google::cloud::retail::v2::Catalog> UpdateCatalog(
      google::cloud::retail::v2::UpdateCatalogRequest const& request) override;

  Status SetDefaultBranch(
      google::cloud::retail::v2::SetDefaultBranchRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
  GetDefaultBranch(google::cloud::retail::v2::GetDefaultBranchRequest const&
                       request) override;

 private:
  std::unique_ptr<retail::CatalogServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<retail::CatalogServiceRetryPolicyOption>()) {
      return options.get<retail::CatalogServiceRetryPolicyOption>()->clone();
    }
    return options_.get<retail::CatalogServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<retail::CatalogServiceBackoffPolicyOption>()) {
      return options.get<retail::CatalogServiceBackoffPolicyOption>()->clone();
    }
    return options_.get<retail::CatalogServiceBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<retail::CatalogServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<retail::CatalogServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<retail::CatalogServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<retail::CatalogServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<retail_internal::CatalogServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_CATALOG_CONNECTION_IMPL_H
