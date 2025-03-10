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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#include "google/cloud/websecurityscanner/web_security_scanner_connection.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_connection_impl.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_option_defaults.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_stub_factory.h"
#include "google/cloud/websecurityscanner/web_security_scanner_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebSecurityScannerConnection::~WebSecurityScannerConnection() = default;

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::CreateScanConfig(
    google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status WebSecurityScannerConnection::DeleteScanConfig(
    google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::GetScanConfig(
    google::cloud::websecurityscanner::v1::GetScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::ListScanConfigs(
    google::cloud::websecurityscanner::v1::
        ListScanConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>>();
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerConnection::UpdateScanConfig(
    google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::StartScanRun(
    google::cloud::websecurityscanner::v1::StartScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::GetScanRun(
    google::cloud::websecurityscanner::v1::GetScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::ListScanRuns(
    google::cloud::websecurityscanner::v1::
        ListScanRunsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::ScanRun>>();
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerConnection::StopScanRun(
    google::cloud::websecurityscanner::v1::StopScanRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
WebSecurityScannerConnection::ListCrawledUrls(
    google::cloud::websecurityscanner::v1::
        ListCrawledUrlsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>>();
}

StatusOr<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerConnection::GetFinding(
    google::cloud::websecurityscanner::v1::GetFindingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerConnection::ListFindings(
    google::cloud::websecurityscanner::v1::
        ListFindingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::websecurityscanner::v1::Finding>>();
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
WebSecurityScannerConnection::ListFindingTypeStats(
    google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<WebSecurityScannerConnection> MakeWebSecurityScannerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 WebSecurityScannerPolicyOptionList>(options,
                                                                     __func__);
  options = websecurityscanner_internal::WebSecurityScannerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = websecurityscanner_internal::CreateDefaultWebSecurityScannerStub(
      background->cq(), options);
  return std::make_shared<
      websecurityscanner_internal::WebSecurityScannerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
