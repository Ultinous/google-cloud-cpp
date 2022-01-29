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
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_CONNECTION_IMPL_H

#include "google/cloud/vision/image_annotator_connection.h"
#include "google/cloud/vision/image_annotator_connection_idempotency_policy.h"
#include "google/cloud/vision/image_annotator_options.h"
#include "google/cloud/vision/internal/image_annotator_retry_traits.h"
#include "google/cloud/vision/internal/image_annotator_stub.h"
#include "google/cloud/background_threads.h"
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
namespace vision_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageAnnotatorConnectionImpl : public vision::ImageAnnotatorConnection {
 public:
  ~ImageAnnotatorConnectionImpl() override = default;

  ImageAnnotatorConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<vision_internal::ImageAnnotatorStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(google::cloud::vision::v1::BatchAnnotateFilesRequest const&
                         request) override;

  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
  AsyncBatchAnnotateImages(
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request)
      override;

  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
  AsyncBatchAnnotateFiles(
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request)
      override;

 private:
  std::unique_ptr<vision::ImageAnnotatorRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ImageAnnotatorRetryPolicyOption>()) {
      return options.get<vision::ImageAnnotatorRetryPolicyOption>()->clone();
    }
    return options_.get<vision::ImageAnnotatorRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ImageAnnotatorBackoffPolicyOption>()) {
      return options.get<vision::ImageAnnotatorBackoffPolicyOption>()->clone();
    }
    return options_.get<vision::ImageAnnotatorBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<vision::ImageAnnotatorConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<vision::ImageAnnotatorConnectionIdempotencyPolicyOption>()) {
      return options
          .get<vision::ImageAnnotatorConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<vision::ImageAnnotatorConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vision::ImageAnnotatorPollingPolicyOption>()) {
      return options.get<vision::ImageAnnotatorPollingPolicyOption>()->clone();
    }
    return options_.get<vision::ImageAnnotatorPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<vision_internal::ImageAnnotatorStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_CONNECTION_IMPL_H
