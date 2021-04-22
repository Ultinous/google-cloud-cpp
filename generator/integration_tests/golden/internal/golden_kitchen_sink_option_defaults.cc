// Copyright 2021 Google LLC
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

#include "generator/integration_tests/golden/internal/golden_kitchen_sink_option_defaults.h"
#include "generator/integration_tests/golden/golden_kitchen_sink_connection.h"
#include "generator/integration_tests/golden/golden_kitchen_sink_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options GoldenKitchenSinkDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env = internal::GetEnv("GOOGLE_CLOUD_CPP_GOLDEN_KITCHEN_SINK_ENDPOINT");
    options.set<EndpointOption>(env ? *env : "goldenkitchensink.googleapis.com");
  }
  if (!options.has<GrpcCredentialOption>()) {
    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());
  }
  if (!options.has<GrpcBackgroundThreadsFactoryOption>()) {
    options.set<GrpcBackgroundThreadsFactoryOption>(
        internal::DefaultBackgroundThreadsFactory);
  }
  if (!options.has<GrpcNumChannelsOption>()) {
    options.set<GrpcNumChannelsOption>(4);
  }
  auto& products = options.lookup<UserAgentProductsOption>();
  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());

  if (!options.has<golden::GoldenKitchenSinkRetryPolicyOption>()) {
    options.set<golden::GoldenKitchenSinkRetryPolicyOption>(
        golden::GoldenKitchenSinkLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }

  if (!options.has<golden::GoldenKitchenSinkBackoffPolicyOption>()) {
    options.set<golden::GoldenKitchenSinkBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }

  if (!options.has<golden::GoldenKitchenSinkConnectionIdempotencyPolicyOption>()) {
    options.set<golden::GoldenKitchenSinkConnectionIdempotencyPolicyOption>(
        golden::MakeDefaultGoldenKitchenSinkConnectionIdempotencyPolicy());
  }

  return options;
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
