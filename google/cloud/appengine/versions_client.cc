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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/versions_client.h"
#include "google/cloud/appengine/internal/versions_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsClient::VersionsClient(std::shared_ptr<VersionsConnection> connection,
                               Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options),
          appengine_internal::VersionsDefaultOptions(connection_->options()))) {
}
VersionsClient::~VersionsClient() = default;

StreamRange<google::appengine::v1::Version> VersionsClient::ListVersions(
    google::appengine::v1::ListVersionsRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListVersions(std::move(request));
}

StatusOr<google::appengine::v1::Version> VersionsClient::GetVersion(
    google::appengine::v1::GetVersionRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetVersion(request);
}

future<StatusOr<google::appengine::v1::Version>> VersionsClient::CreateVersion(
    google::appengine::v1::CreateVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateVersion(request);
}

future<StatusOr<google::appengine::v1::Version>> VersionsClient::UpdateVersion(
    google::appengine::v1::UpdateVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateVersion(request);
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
VersionsClient::DeleteVersion(
    google::appengine::v1::DeleteVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteVersion(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
