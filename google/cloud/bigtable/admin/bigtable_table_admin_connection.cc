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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/bigtable_table_admin_connection.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_options.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_connection_impl.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_option_defaults.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminConnection::~BigtableTableAdminConnection() = default;

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnection::CreateTable(
    google::bigtable::admin::v2::CreateTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::bigtable::admin::v2::Table>
BigtableTableAdminConnection::ListTables(
    google::bigtable::admin::v2::ListTablesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::Table>>(
      std::move(request),
      [](google::bigtable::admin::v2::ListTablesRequest const&) {
        return StatusOr<google::bigtable::admin::v2::ListTablesResponse>{};
      },
      [](google::bigtable::admin::v2::ListTablesResponse const&) {
        return std::vector<google::bigtable::admin::v2::Table>();
      });
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnection::GetTable(
    google::bigtable::admin::v2::GetTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status BigtableTableAdminConnection::DeleteTable(
    google::bigtable::admin::v2::DeleteTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnection::ModifyColumnFamilies(
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status BigtableTableAdminConnection::DropRowRange(
    google::bigtable::admin::v2::DropRowRangeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminConnection::GenerateConsistencyToken(
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminConnection::CheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminConnection::CreateBackup(
    google::bigtable::admin::v2::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::bigtable::admin::v2::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnection::GetBackup(
    google::bigtable::admin::v2::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnection::UpdateBackup(
    google::bigtable::admin::v2::UpdateBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status BigtableTableAdminConnection::DeleteBackup(
    google::bigtable::admin::v2::DeleteBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnection::ListBackups(
    google::bigtable::admin::v2::ListBackupsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::Backup>>(
      std::move(request),
      [](google::bigtable::admin::v2::ListBackupsRequest const&) {
        return StatusOr<google::bigtable::admin::v2::ListBackupsResponse>{};
      },
      [](google::bigtable::admin::v2::ListBackupsResponse const&) {
        return std::vector<google::bigtable::admin::v2::Backup>();
      });
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminConnection::RestoreTable(
    google::bigtable::admin::v2::RestoreTableRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::bigtable::admin::v2::Table>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminConnection::AsyncCheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<BigtableTableAdminConnection> MakeBigtableTableAdminConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 BigtableTableAdminPolicyOptionList>(options,
                                                                     __func__);
  options = bigtable_admin_internal::BigtableTableAdminDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = bigtable_admin_internal::CreateDefaultBigtableTableAdminStub(
      background->cq(), options);
  return std::make_shared<
      bigtable_admin_internal::BigtableTableAdminConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<bigtable_admin::BigtableTableAdminConnection>
MakeBigtableTableAdminConnection(std::shared_ptr<BigtableTableAdminStub> stub,
                                 Options options) {
  options = BigtableTableAdminDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      bigtable_admin_internal::BigtableTableAdminConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
