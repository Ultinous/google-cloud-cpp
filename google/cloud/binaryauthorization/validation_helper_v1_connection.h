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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_VALIDATION_HELPER_V1_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_VALIDATION_HELPER_V1_CONNECTION_H

#include "google/cloud/binaryauthorization/internal/validation_helper_v1_retry_traits.h"
#include "google/cloud/binaryauthorization/internal/validation_helper_v1_stub.h"
#include "google/cloud/binaryauthorization/validation_helper_v1_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ValidationHelperV1RetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        binaryauthorization_internal::ValidationHelperV1RetryTraits>;

using ValidationHelperV1LimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        binaryauthorization_internal::ValidationHelperV1RetryTraits>;

using ValidationHelperV1LimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        binaryauthorization_internal::ValidationHelperV1RetryTraits>;

class ValidationHelperV1Connection {
 public:
  virtual ~ValidationHelperV1Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::binaryauthorization::v1::
                       ValidateAttestationOccurrenceResponse>
  ValidateAttestationOccurrence(
      google::cloud::binaryauthorization::v1::
          ValidateAttestationOccurrenceRequest const& request);
};

std::shared_ptr<ValidationHelperV1Connection> MakeValidationHelperV1Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<binaryauthorization::ValidationHelperV1Connection>
MakeValidationHelperV1Connection(std::shared_ptr<ValidationHelperV1Stub> stub,
                                 Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_VALIDATION_HELPER_V1_CONNECTION_H
