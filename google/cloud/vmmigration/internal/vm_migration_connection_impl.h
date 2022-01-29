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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_INTERNAL_VM_MIGRATION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_INTERNAL_VM_MIGRATION_CONNECTION_IMPL_H

#include "google/cloud/vmmigration/internal/vm_migration_retry_traits.h"
#include "google/cloud/vmmigration/internal/vm_migration_stub.h"
#include "google/cloud/vmmigration/vm_migration_connection.h"
#include "google/cloud/vmmigration/vm_migration_connection_idempotency_policy.h"
#include "google/cloud/vmmigration/vm_migration_options.h"
#include "google/cloud/background_threads.h"
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
namespace vmmigration_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmMigrationConnectionImpl : public vmmigration::VmMigrationConnection {
 public:
  ~VmMigrationConnectionImpl() override = default;

  VmMigrationConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<vmmigration_internal::VmMigrationStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::vmmigration::v1::Source> ListSources(
      google::cloud::vmmigration::v1::ListSourcesRequest request) override;

  StatusOr<google::cloud::vmmigration::v1::Source> GetSource(
      google::cloud::vmmigration::v1::GetSourceRequest const& request) override;

  future<StatusOr<google::cloud::vmmigration::v1::Source>> CreateSource(
      google::cloud::vmmigration::v1::CreateSourceRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::Source>> UpdateSource(
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteSource(google::cloud::vmmigration::v1::DeleteSourceRequest const&
                   request) override;

  StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
  FetchInventory(google::cloud::vmmigration::v1::FetchInventoryRequest const&
                     request) override;

  StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
  ListUtilizationReports(
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest request)
      override;

  StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
  GetUtilizationReport(
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
  CreateUtilizationReport(
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteUtilizationReport(
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request) override;

  StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
  ListDatacenterConnectors(
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request)
      override;

  StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
  GetDatacenterConnector(
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
  CreateDatacenterConnector(
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteDatacenterConnector(
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
  CreateMigratingVm(
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request)
      override;

  StreamRange<google::cloud::vmmigration::v1::MigratingVm> ListMigratingVms(
      google::cloud::vmmigration::v1::ListMigratingVmsRequest request) override;

  StatusOr<google::cloud::vmmigration::v1::MigratingVm> GetMigratingVm(
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
  UpdateMigratingVm(
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteMigratingVm(
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
  StartMigration(google::cloud::vmmigration::v1::StartMigrationRequest const&
                     request) override;

  future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>
  ResumeMigration(google::cloud::vmmigration::v1::ResumeMigrationRequest const&
                      request) override;

  future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>
  PauseMigration(google::cloud::vmmigration::v1::PauseMigrationRequest const&
                     request) override;

  future<StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
  FinalizeMigration(
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::CloneJob>> CreateCloneJob(
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
  CancelCloneJob(google::cloud::vmmigration::v1::CancelCloneJobRequest const&
                     request) override;

  StreamRange<google::cloud::vmmigration::v1::CloneJob> ListCloneJobs(
      google::cloud::vmmigration::v1::ListCloneJobsRequest request) override;

  StatusOr<google::cloud::vmmigration::v1::CloneJob> GetCloneJob(
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>> CreateCutoverJob(
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
  CancelCutoverJob(
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request)
      override;

  StreamRange<google::cloud::vmmigration::v1::CutoverJob> ListCutoverJobs(
      google::cloud::vmmigration::v1::ListCutoverJobsRequest request) override;

  StatusOr<google::cloud::vmmigration::v1::CutoverJob> GetCutoverJob(
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request)
      override;

  StreamRange<google::cloud::vmmigration::v1::Group> ListGroups(
      google::cloud::vmmigration::v1::ListGroupsRequest request) override;

  StatusOr<google::cloud::vmmigration::v1::Group> GetGroup(
      google::cloud::vmmigration::v1::GetGroupRequest const& request) override;

  future<StatusOr<google::cloud::vmmigration::v1::Group>> CreateGroup(
      google::cloud::vmmigration::v1::CreateGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::Group>> UpdateGroup(
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteGroup(google::cloud::vmmigration::v1::DeleteGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
  AddGroupMigration(
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
  RemoveGroupMigration(
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request) override;

  StreamRange<google::cloud::vmmigration::v1::TargetProject> ListTargetProjects(
      google::cloud::vmmigration::v1::ListTargetProjectsRequest request)
      override;

  StatusOr<google::cloud::vmmigration::v1::TargetProject> GetTargetProject(
      google::cloud::vmmigration::v1::GetTargetProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
  CreateTargetProject(
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
  UpdateTargetProject(
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteTargetProject(
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request)
      override;

 private:
  std::unique_ptr<vmmigration::VmMigrationRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vmmigration::VmMigrationRetryPolicyOption>()) {
      return options.get<vmmigration::VmMigrationRetryPolicyOption>()->clone();
    }
    return options_.get<vmmigration::VmMigrationRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vmmigration::VmMigrationBackoffPolicyOption>()) {
      return options.get<vmmigration::VmMigrationBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<vmmigration::VmMigrationBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<vmmigration::VmMigrationConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<vmmigration::VmMigrationConnectionIdempotencyPolicyOption>()) {
      return options
          .get<vmmigration::VmMigrationConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<vmmigration::VmMigrationConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<vmmigration::VmMigrationPollingPolicyOption>()) {
      return options.get<vmmigration::VmMigrationPollingPolicyOption>()
          ->clone();
    }
    return options_.get<vmmigration::VmMigrationPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<vmmigration_internal::VmMigrationStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_INTERNAL_VM_MIGRATION_CONNECTION_IMPL_H
