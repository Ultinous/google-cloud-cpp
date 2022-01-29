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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CONNECTION_H

#include "google/cloud/secretmanager/internal/secret_manager_retry_traits.h"
#include "google/cloud/secretmanager/internal/secret_manager_stub.h"
#include "google/cloud/secretmanager/secret_manager_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SecretManagerServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        secretmanager_internal::SecretManagerServiceRetryTraits>;

using SecretManagerServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        secretmanager_internal::SecretManagerServiceRetryTraits>;

using SecretManagerServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        secretmanager_internal::SecretManagerServiceRetryTraits>;

class SecretManagerServiceConnection {
 public:
  virtual ~SecretManagerServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      google::cloud::secretmanager::v1::ListSecretsRequest request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      google::cloud::secretmanager::v1::CreateSecretRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  AddSecretVersion(
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      google::cloud::secretmanager::v1::GetSecretRequest const& request);

  virtual StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request);

  virtual Status DeleteSecret(
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request);

  virtual StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(
      google::cloud::secretmanager::v1::ListSecretVersionsRequest request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  GetSecretVersion(
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request);

  virtual StatusOr<
      google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  EnableSecretVersion(
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request);

  virtual StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

std::shared_ptr<SecretManagerServiceConnection>
MakeSecretManagerServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<secretmanager::SecretManagerServiceConnection>
MakeSecretManagerServiceConnection(
    std::shared_ptr<SecretManagerServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CONNECTION_H
