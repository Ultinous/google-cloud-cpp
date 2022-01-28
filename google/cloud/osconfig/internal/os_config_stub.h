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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OsConfigServiceStub {
 public:
  virtual ~OsConfigServiceStub() = 0;

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> ExecutePatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::GetPatchJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> CancelPatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>
  ListPatchJobs(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchJobsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
  ListPatchJobInstanceDetails(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  CreatePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  GetPatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
  ListPatchDeployments(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest const&
          request) = 0;

  virtual Status DeletePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const&
          request) = 0;
};

class DefaultOsConfigServiceStub : public OsConfigServiceStub {
 public:
  explicit DefaultOsConfigServiceStub(
      std::unique_ptr<
          google::cloud::osconfig::v1::OsConfigService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::osconfig::v1::PatchJob> ExecutePatchJob(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::GetPatchJobRequest const& request) override;

  StatusOr<google::cloud::osconfig::v1::PatchJob> CancelPatchJob(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse> ListPatchJobs(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::ListPatchJobsRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
  ListPatchJobInstanceDetails(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
          request) override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> CreatePatchDeployment(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> GetPatchDeployment(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
  ListPatchDeployments(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request)
      override;

  Status DeletePatchDeployment(
      grpc::ClientContext& client_context,
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::osconfig::v1::OsConfigService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_STUB_H