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

#include "google/cloud/vision/internal/image_annotator_option_defaults.h"
#include "google/cloud/vision/image_annotator_connection.h"
#include "google/cloud/vision/image_annotator_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ImageAnnotatorDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IMAGE_ANNOTATOR_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_IMAGE_ANNOTATOR_AUTHORITY", "vision.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<vision::ImageAnnotatorRetryPolicyOption>()) {
    options.set<vision::ImageAnnotatorRetryPolicyOption>(
        vision::ImageAnnotatorLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<vision::ImageAnnotatorBackoffPolicyOption>()) {
    options.set<vision::ImageAnnotatorBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<vision::ImageAnnotatorPollingPolicyOption>()) {
    options.set<vision::ImageAnnotatorPollingPolicyOption>(
        GenericPollingPolicy<vision::ImageAnnotatorRetryPolicyOption::Type,
                             vision::ImageAnnotatorBackoffPolicyOption::Type>(
            options.get<vision::ImageAnnotatorRetryPolicyOption>()->clone(),
            options.get<vision::ImageAnnotatorBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<vision::ImageAnnotatorConnectionIdempotencyPolicyOption>()) {
    options.set<vision::ImageAnnotatorConnectionIdempotencyPolicyOption>(
        vision::MakeDefaultImageAnnotatorConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_internal
}  // namespace cloud
}  // namespace google
