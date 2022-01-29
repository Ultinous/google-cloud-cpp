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
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_CONNECTION_IMPL_H

#include "google/cloud/videointelligence/internal/video_intelligence_retry_traits.h"
#include "google/cloud/videointelligence/internal/video_intelligence_stub.h"
#include "google/cloud/videointelligence/video_intelligence_connection.h"
#include "google/cloud/videointelligence/video_intelligence_connection_idempotency_policy.h"
#include "google/cloud/videointelligence/video_intelligence_options.h"
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
namespace videointelligence_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VideoIntelligenceServiceConnectionImpl
    : public videointelligence::VideoIntelligenceServiceConnection {
 public:
  ~VideoIntelligenceServiceConnectionImpl() override = default;

  VideoIntelligenceServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<videointelligence_internal::VideoIntelligenceServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
  AnnotateVideo(
      google::cloud::videointelligence::v1::AnnotateVideoRequest const& request)
      override;

 private:
  std::unique_ptr<videointelligence::VideoIntelligenceServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            videointelligence::VideoIntelligenceServiceRetryPolicyOption>()) {
      return options
          .get<videointelligence::VideoIntelligenceServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<videointelligence::VideoIntelligenceServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            videointelligence::VideoIntelligenceServiceBackoffPolicyOption>()) {
      return options
          .get<videointelligence::VideoIntelligenceServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<videointelligence::VideoIntelligenceServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      videointelligence::VideoIntelligenceServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            videointelligence::
                VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<videointelligence::
                   VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<videointelligence::
                 VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            videointelligence::VideoIntelligenceServicePollingPolicyOption>()) {
      return options
          .get<videointelligence::VideoIntelligenceServicePollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<videointelligence::VideoIntelligenceServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<videointelligence_internal::VideoIntelligenceServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_CONNECTION_IMPL_H
