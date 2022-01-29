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
// source: google/cloud/talent/v4/completion_service.proto

#include "google/cloud/talent/completion_client.h"
#include "google/cloud/talent/internal/completion_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompletionClient::CompletionClient(
    std::shared_ptr<CompletionConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options),
          talent_internal::CompletionDefaultOptions(connection_->options()))) {}
CompletionClient::~CompletionClient() = default;

StatusOr<google::cloud::talent::v4::CompleteQueryResponse>
CompletionClient::CompleteQuery(
    google::cloud::talent::v4::CompleteQueryRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CompleteQuery(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google
