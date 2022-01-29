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
// source: google/devtools/clouddebugger/v2/debugger.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_CONNECTION_IMPL_H

#include "google/cloud/debugger/debugger2_connection.h"
#include "google/cloud/debugger/debugger2_connection_idempotency_policy.h"
#include "google/cloud/debugger/debugger2_options.h"
#include "google/cloud/debugger/internal/debugger2_retry_traits.h"
#include "google/cloud/debugger/internal/debugger2_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class Debugger2ConnectionImpl : public debugger::Debugger2Connection {
 public:
  ~Debugger2ConnectionImpl() override = default;

  Debugger2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<debugger_internal::Debugger2Stub> stub, Options options);

  Options options() override { return options_; }

  StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
  SetBreakpoint(google::devtools::clouddebugger::v2::SetBreakpointRequest const&
                    request) override;

  StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
  GetBreakpoint(google::devtools::clouddebugger::v2::GetBreakpointRequest const&
                    request) override;

  Status DeleteBreakpoint(
      google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
  ListBreakpoints(
      google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
  ListDebuggees(google::devtools::clouddebugger::v2::ListDebuggeesRequest const&
                    request) override;

 private:
  std::unique_ptr<debugger::Debugger2RetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Debugger2RetryPolicyOption>()) {
      return options.get<debugger::Debugger2RetryPolicyOption>()->clone();
    }
    return options_.get<debugger::Debugger2RetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Debugger2BackoffPolicyOption>()) {
      return options.get<debugger::Debugger2BackoffPolicyOption>()->clone();
    }
    return options_.get<debugger::Debugger2BackoffPolicyOption>()->clone();
  }

  std::unique_ptr<debugger::Debugger2ConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Debugger2ConnectionIdempotencyPolicyOption>()) {
      return options
          .get<debugger::Debugger2ConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<debugger::Debugger2ConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<debugger_internal::Debugger2Stub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_CONNECTION_IMPL_H
