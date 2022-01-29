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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_PRODUCT_SEARCH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_PRODUCT_SEARCH_CONNECTION_IMPL_H

#include "google/cloud/vision/internal/product_search_retry_traits.h"
#include "google/cloud/vision/internal/product_search_stub.h"
#include "google/cloud/vision/product_search_connection.h"
#include "google/cloud/vision/product_search_connection_idempotency_policy.h"
#include "google/cloud/vision/product_search_options.h"
#include "google/cloud/background_threads.h"
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
namespace vision_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProductSearchConnectionImpl : public vision::ProductSearchConnection {
 public:
  ~ProductSearchConnectionImpl() override = default;

  ProductSearchConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<vision_internal::ProductSearchStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::vision::v1::ProductSet> CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request)
      override;

  StreamRange<google::cloud::vision::v1::ProductSet> ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request) override;

  StatusOr<google::cloud::vision::v1::ProductSet> GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ProductSet> UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request)
      override;

  Status DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::Product> CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request) override;

  StreamRange<google::cloud::vision::v1::Product> ListProducts(
      google::cloud::vision::v1::ListProductsRequest request) override;

  StatusOr<google::cloud::vision::v1::Product> GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::Product> UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request) override;

  Status DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const& request)
      override;

  Status DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request)
      override;

  StreamRange<google::cloud::vision::v1::ReferenceImage> ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request) override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request)
      override;

  Status AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const& request)
      override;

  Status RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request) override;

  StreamRange<google::cloud::vision::v1::Product> ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request)
      override;

  future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
  ImportProductSets(google::cloud::vision::v1::ImportProductSetsRequest const&
                        request) override;

  future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
  PurgeProducts(
      google::cloud::vision::v1::PurgeProductsRequest const& request) override;

 private:
  std::unique_ptr<vision::ProductSearchRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ProductSearchRetryPolicyOption>()) {
      return options.get<vision::ProductSearchRetryPolicyOption>()->clone();
    }
    return options_.get<vision::ProductSearchRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ProductSearchBackoffPolicyOption>()) {
      return options.get<vision::ProductSearchBackoffPolicyOption>()->clone();
    }
    return options_.get<vision::ProductSearchBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<vision::ProductSearchConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ProductSearchConnectionIdempotencyPolicyOption>()) {
      return options
          .get<vision::ProductSearchConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<vision::ProductSearchConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ProductSearchPollingPolicyOption>()) {
      return options.get<vision::ProductSearchPollingPolicyOption>()->clone();
    }
    return options_.get<vision::ProductSearchPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<vision_internal::ProductSearchStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_PRODUCT_SEARCH_CONNECTION_IMPL_H
