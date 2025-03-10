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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/internal/uptime_check_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/uptime_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UptimeCheckServiceStub::~UptimeCheckServiceStub() = default;

StatusOr<google::monitoring::v3::ListUptimeCheckConfigsResponse>
DefaultUptimeCheckServiceStub::ListUptimeCheckConfigs(
    grpc::ClientContext& client_context,
    google::monitoring::v3::ListUptimeCheckConfigsRequest const& request) {
  google::monitoring::v3::ListUptimeCheckConfigsResponse response;
  auto status =
      grpc_stub_->ListUptimeCheckConfigs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
DefaultUptimeCheckServiceStub::GetUptimeCheckConfig(
    grpc::ClientContext& client_context,
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
  google::monitoring::v3::UptimeCheckConfig response;
  auto status =
      grpc_stub_->GetUptimeCheckConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
DefaultUptimeCheckServiceStub::CreateUptimeCheckConfig(
    grpc::ClientContext& client_context,
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request) {
  google::monitoring::v3::UptimeCheckConfig response;
  auto status =
      grpc_stub_->CreateUptimeCheckConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
DefaultUptimeCheckServiceStub::UpdateUptimeCheckConfig(
    grpc::ClientContext& client_context,
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request) {
  google::monitoring::v3::UptimeCheckConfig response;
  auto status =
      grpc_stub_->UpdateUptimeCheckConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultUptimeCheckServiceStub::DeleteUptimeCheckConfig(
    grpc::ClientContext& client_context,
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteUptimeCheckConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::monitoring::v3::ListUptimeCheckIpsResponse>
DefaultUptimeCheckServiceStub::ListUptimeCheckIps(
    grpc::ClientContext& client_context,
    google::monitoring::v3::ListUptimeCheckIpsRequest const& request) {
  google::monitoring::v3::ListUptimeCheckIpsResponse response;
  auto status =
      grpc_stub_->ListUptimeCheckIps(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
