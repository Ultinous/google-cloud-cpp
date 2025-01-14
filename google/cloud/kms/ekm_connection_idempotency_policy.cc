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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/ekm_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EkmServiceConnectionIdempotencyPolicy::
    ~EkmServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultEkmServiceConnectionIdempotencyPolicy
    : public EkmServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultEkmServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<EkmServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultEkmServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListEkmConnections(
      google::cloud::kms::v1::ListEkmConnectionsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetEkmConnection(
      google::cloud::kms::v1::GetEkmConnectionRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateEkmConnection(
      google::cloud::kms::v1::CreateEkmConnectionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateEkmConnection(
      google::cloud::kms::v1::UpdateEkmConnectionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<EkmServiceConnectionIdempotencyPolicy>
MakeDefaultEkmServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultEkmServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms
}  // namespace cloud
}  // namespace google
