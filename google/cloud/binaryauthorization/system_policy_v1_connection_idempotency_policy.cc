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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/system_policy_v1_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SystemPolicyV1ConnectionIdempotencyPolicy::
    ~SystemPolicyV1ConnectionIdempotencyPolicy() = default;

namespace {
class DefaultSystemPolicyV1ConnectionIdempotencyPolicy
    : public SystemPolicyV1ConnectionIdempotencyPolicy {
 public:
  ~DefaultSystemPolicyV1ConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<SystemPolicyV1ConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultSystemPolicyV1ConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency GetSystemPolicy(
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&)
      override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<SystemPolicyV1ConnectionIdempotencyPolicy>
MakeDefaultSystemPolicyV1ConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultSystemPolicyV1ConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google