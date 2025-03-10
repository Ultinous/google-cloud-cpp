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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/internal/dataplex_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceMetadata::DataplexServiceMetadata(
    std::shared_ptr<DataplexServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateLake(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  SetMetadata(*context, "lake.name=" + request.lake().name());
  return child_->AsyncUpdateLake(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteLake(cq, std::move(context), request);
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DataplexServiceMetadata::ListLakes(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListLakes(context, request);
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceMetadata::GetLake(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetLake(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListLakeActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListLakeActions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateZone(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  SetMetadata(*context, "zone.name=" + request.zone().name());
  return child_->AsyncUpdateZone(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteZone(cq, std::move(context), request);
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DataplexServiceMetadata::ListZones(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListZones(context, request);
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceMetadata::GetZone(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetZone(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListZoneActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListZoneActions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAsset(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  SetMetadata(*context, "asset.name=" + request.asset().name());
  return child_->AsyncUpdateAsset(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAsset(cq, std::move(context), request);
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DataplexServiceMetadata::ListAssets(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::dataplex::v1::Asset> DataplexServiceMetadata::GetAsset(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAsset(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListAssetActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAssetActions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateTask(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  SetMetadata(*context, "task.name=" + request.task().name());
  return child_->AsyncUpdateTask(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteTask(cq, std::move(context), request);
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DataplexServiceMetadata::ListTasks(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTasks(context, request);
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceMetadata::GetTask(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTask(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DataplexServiceMetadata::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceMetadata::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetJob(context, request);
}

Status DataplexServiceMetadata::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->CancelJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  SetMetadata(*context, "environment.name=" + request.environment().name());
  return child_->AsyncUpdateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DataplexServiceMetadata::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEnvironments(context, request);
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEnvironment(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DataplexServiceMetadata::ListSessions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSessions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DataplexServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DataplexServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DataplexServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google
