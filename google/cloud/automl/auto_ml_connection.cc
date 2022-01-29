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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/auto_ml_connection.h"
#include "google/cloud/automl/auto_ml_options.h"
#include "google/cloud/automl/internal/auto_ml_connection_impl.h"
#include "google/cloud/automl/internal/auto_ml_option_defaults.h"
#include "google/cloud/automl/internal/auto_ml_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoMlConnection::~AutoMlConnection() = default;

future<StatusOr<google::cloud::automl::v1::Dataset>>
AutoMlConnection::CreateDataset(
    google::cloud::automl::v1::CreateDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::Dataset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlConnection::GetDataset(
    google::cloud::automl::v1::GetDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::Dataset> AutoMlConnection::ListDatasets(
    google::cloud::automl::v1::ListDatasetsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::Dataset>>(
      std::move(request),
      [](google::cloud::automl::v1::ListDatasetsRequest const&) {
        return StatusOr<google::cloud::automl::v1::ListDatasetsResponse>{};
      },
      [](google::cloud::automl::v1::ListDatasetsResponse const&) {
        return std::vector<google::cloud::automl::v1::Dataset>();
      });
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlConnection::UpdateDataset(
    google::cloud::automl::v1::UpdateDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeleteDataset(
    google::cloud::automl::v1::DeleteDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ImportData(
    google::cloud::automl::v1::ImportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ExportData(
    google::cloud::automl::v1::ExportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlConnection::GetAnnotationSpec(
    google::cloud::automl::v1::GetAnnotationSpecRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::Model>>
AutoMlConnection::CreateModel(
    google::cloud::automl::v1::CreateModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::Model>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlConnection::GetModel(
    google::cloud::automl::v1::GetModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::Model> AutoMlConnection::ListModels(
    google::cloud::automl::v1::ListModelsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::Model>>(
      std::move(request),
      [](google::cloud::automl::v1::ListModelsRequest const&) {
        return StatusOr<google::cloud::automl::v1::ListModelsResponse>{};
      },
      [](google::cloud::automl::v1::ListModelsResponse const&) {
        return std::vector<google::cloud::automl::v1::Model>();
      });
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeleteModel(
    google::cloud::automl::v1::DeleteModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlConnection::UpdateModel(
    google::cloud::automl::v1::UpdateModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeployModel(
    google::cloud::automl::v1::DeployModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::UndeployModel(
    google::cloud::automl::v1::UndeployModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ExportModel(
    google::cloud::automl::v1::ExportModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlConnection::GetModelEvaluation(
    google::cloud::automl::v1::GetModelEvaluationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::ModelEvaluation>
AutoMlConnection::ListModelEvaluations(
    google::cloud::automl::v1::ListModelEvaluationsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::ModelEvaluation>>(
      std::move(request),
      [](google::cloud::automl::v1::ListModelEvaluationsRequest const&) {
        return StatusOr<
            google::cloud::automl::v1::ListModelEvaluationsResponse>{};
      },
      [](google::cloud::automl::v1::ListModelEvaluationsResponse const&) {
        return std::vector<google::cloud::automl::v1::ModelEvaluation>();
      });
}

std::shared_ptr<AutoMlConnection> MakeAutoMlConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AutoMlPolicyOptionList>(options, __func__);
  options = automl_internal::AutoMlDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      automl_internal::CreateDefaultAutoMlStub(background->cq(), options);
  return std::make_shared<automl_internal::AutoMlConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<automl::AutoMlConnection> MakeAutoMlConnection(
    std::shared_ptr<AutoMlStub> stub, Options options) {
  options = AutoMlDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<automl_internal::AutoMlConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google
