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
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/internal/os_login_connection_impl.h"
#include "google/cloud/oslogin/internal/os_login_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace oslogin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsLoginServiceConnectionImpl::OsLoginServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<oslogin_internal::OsLoginServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), oslogin_internal::OsLoginServiceDefaultOptions(
                                  OsLoginServiceConnection::options()))) {}

Status OsLoginServiceConnectionImpl::DeletePosixAccount(
    google::cloud::oslogin::v1::DeletePosixAccountRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeletePosixAccount(request),
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::DeletePosixAccountRequest const&
                 request) {
        return stub_->DeletePosixAccount(context, request);
      },
      request, __func__);
}

Status OsLoginServiceConnectionImpl::DeleteSshPublicKey(
    google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteSshPublicKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const&
                 request) {
        return stub_->DeleteSshPublicKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceConnectionImpl::GetLoginProfile(
    google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetLoginProfile(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
        return stub_->GetLoginProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceConnectionImpl::GetSshPublicKey(
    google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetSshPublicKey(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
        return stub_->GetSshPublicKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceConnectionImpl::ImportSshPublicKey(
    google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportSshPublicKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::ImportSshPublicKeyRequest const&
                 request) {
        return stub_->ImportSshPublicKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceConnectionImpl::UpdateSshPublicKey(
    google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateSshPublicKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const&
                 request) {
        return stub_->UpdateSshPublicKey(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_internal
}  // namespace cloud
}  // namespace google
