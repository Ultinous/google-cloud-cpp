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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_CONNECTION_IMPL_H

#include "google/cloud/appengine/firewall_connection.h"
#include "google/cloud/appengine/firewall_connection_idempotency_policy.h"
#include "google/cloud/appengine/firewall_options.h"
#include "google/cloud/appengine/internal/firewall_retry_traits.h"
#include "google/cloud/appengine/internal/firewall_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FirewallConnectionImpl : public appengine::FirewallConnection {
 public:
  ~FirewallConnectionImpl() override = default;

  FirewallConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<appengine_internal::FirewallStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::appengine::v1::FirewallRule> ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request) override;

  StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request)
      override;

  StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request) override;

  Status DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request) override;

 private:
  std::unique_ptr<appengine::FirewallRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine::FirewallRetryPolicyOption>()) {
      return options.get<appengine::FirewallRetryPolicyOption>()->clone();
    }
    return options_.get<appengine::FirewallRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine::FirewallBackoffPolicyOption>()) {
      return options.get<appengine::FirewallBackoffPolicyOption>()->clone();
    }
    return options_.get<appengine::FirewallBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<appengine::FirewallConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine::FirewallConnectionIdempotencyPolicyOption>()) {
      return options
          .get<appengine::FirewallConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<appengine::FirewallConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<appengine_internal::FirewallStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_CONNECTION_IMPL_H
