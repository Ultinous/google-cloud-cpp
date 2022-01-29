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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_CONNECTION_IMPL_H

#include "generator/integration_tests/golden/golden_kitchen_sink_connection.h"
#include "generator/integration_tests/golden/golden_kitchen_sink_connection_idempotency_policy.h"
#include "generator/integration_tests/golden/golden_kitchen_sink_options.h"
#include "generator/integration_tests/golden/internal/golden_kitchen_sink_retry_traits.h"
#include "generator/integration_tests/golden/internal/golden_kitchen_sink_stub.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenKitchenSinkConnectionImpl
    : public golden::GoldenKitchenSinkConnection {
 public:
  ~GoldenKitchenSinkConnectionImpl() override = default;

  GoldenKitchenSinkConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<golden_internal::GoldenKitchenSinkStub> stub,
    Options options);

  Options options() override { return options_; }

  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request) override;

  StreamRange<std::string>
  ListLogs(google::test::admin::database::v1::ListLogsRequest request) override;

  StreamRange<google::test::admin::database::v1::TailLogEntriesResponse>
  TailLogEntries(google::test::admin::database::v1::TailLogEntriesRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) override;

  Status
  DoNothing(google::protobuf::Empty const& request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::AppendRowsRequest,
      google::test::admin::database::v1::AppendRowsResponse>>
  AsyncAppendRows() override;

 private:
  std::unique_ptr<golden::GoldenKitchenSinkRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<golden::GoldenKitchenSinkRetryPolicyOption>()) {
      return options.get<golden::GoldenKitchenSinkRetryPolicyOption>()->clone();
    }
    return options_.get<golden::GoldenKitchenSinkRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<golden::GoldenKitchenSinkBackoffPolicyOption>()) {
      return options.get<golden::GoldenKitchenSinkBackoffPolicyOption>()->clone();
    }
    return options_.get<golden::GoldenKitchenSinkBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<golden::GoldenKitchenSinkConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<golden::GoldenKitchenSinkConnectionIdempotencyPolicyOption>()) {
      return options.get<golden::GoldenKitchenSinkConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<golden::GoldenKitchenSinkConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<golden_internal::GoldenKitchenSinkStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_CONNECTION_IMPL_H
