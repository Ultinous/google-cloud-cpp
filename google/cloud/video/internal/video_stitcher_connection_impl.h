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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_VIDEO_STITCHER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_VIDEO_STITCHER_CONNECTION_IMPL_H

#include "google/cloud/video/internal/video_stitcher_retry_traits.h"
#include "google/cloud/video/internal/video_stitcher_stub.h"
#include "google/cloud/video/video_stitcher_connection.h"
#include "google/cloud/video/video_stitcher_connection_idempotency_policy.h"
#include "google/cloud/video/video_stitcher_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VideoStitcherServiceConnectionImpl
    : public video::VideoStitcherServiceConnection {
 public:
  ~VideoStitcherServiceConnectionImpl() override = default;

  VideoStitcherServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<video_internal::VideoStitcherServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::video::stitcher::v1::CdnKey> CreateCdnKey(
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request)
      override;

  StreamRange<google::cloud::video::stitcher::v1::CdnKey> ListCdnKeys(
      google::cloud::video::stitcher::v1::ListCdnKeysRequest request) override;

  StatusOr<google::cloud::video::stitcher::v1::CdnKey> GetCdnKey(
      google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request)
      override;

  Status DeleteCdnKey(
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::CdnKey> UpdateCdnKey(
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> CreateVodSession(
      google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> GetVodSession(
      google::cloud::video::stitcher::v1::GetVodSessionRequest const& request)
      override;

  StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
  ListVodStitchDetails(
      google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
  GetVodStitchDetail(
      google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
          request) override;

  StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
  ListVodAdTagDetails(
      google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
  GetVodAdTagDetail(
      google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
          request) override;

  StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
  ListLiveAdTagDetails(
      google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
  GetLiveAdTagDetail(
      google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::Slate> CreateSlate(
      google::cloud::video::stitcher::v1::CreateSlateRequest const& request)
      override;

  StreamRange<google::cloud::video::stitcher::v1::Slate> ListSlates(
      google::cloud::video::stitcher::v1::ListSlatesRequest request) override;

  StatusOr<google::cloud::video::stitcher::v1::Slate> GetSlate(
      google::cloud::video::stitcher::v1::GetSlateRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::Slate> UpdateSlate(
      google::cloud::video::stitcher::v1::UpdateSlateRequest const& request)
      override;

  Status DeleteSlate(
      google::cloud::video::stitcher::v1::DeleteSlateRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> CreateLiveSession(
      google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> GetLiveSession(
      google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request)
      override;

 private:
  std::unique_ptr<video::VideoStitcherServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<video::VideoStitcherServiceRetryPolicyOption>()) {
      return options.get<video::VideoStitcherServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<video::VideoStitcherServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<video::VideoStitcherServiceBackoffPolicyOption>()) {
      return options.get<video::VideoStitcherServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<video::VideoStitcherServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<video::VideoStitcherServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            video::VideoStitcherServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<video::VideoStitcherServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<video::VideoStitcherServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<video_internal::VideoStitcherServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_VIDEO_STITCHER_CONNECTION_IMPL_H
