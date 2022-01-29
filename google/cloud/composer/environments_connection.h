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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CONNECTION_H

#include "google/cloud/composer/environments_connection_idempotency_policy.h"
#include "google/cloud/composer/internal/environments_retry_traits.h"
#include "google/cloud/composer/internal/environments_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace composer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using EnvironmentsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        composer_internal::EnvironmentsRetryTraits>;

using EnvironmentsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        composer_internal::EnvironmentsRetryTraits>;

using EnvironmentsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        composer_internal::EnvironmentsRetryTraits>;

class EnvironmentsConnection {
 public:
  virtual ~EnvironmentsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        CreateEnvironmentRequest const& request);

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request);

  virtual StreamRange<
      google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest request);

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        UpdateEnvironmentRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(google::cloud::orchestration::airflow::service::v1::
                        DeleteEnvironmentRequest const& request);
};

std::shared_ptr<EnvironmentsConnection> MakeEnvironmentsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace composer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<composer::EnvironmentsConnection> MakeEnvironmentsConnection(
    std::shared_ptr<EnvironmentsStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CONNECTION_H
