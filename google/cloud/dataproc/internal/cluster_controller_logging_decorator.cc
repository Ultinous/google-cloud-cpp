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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/internal/cluster_controller_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/clusters.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterControllerLogging::ClusterControllerLogging(
    std::shared_ptr<ClusterControllerStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::CreateClusterRequest const& request) {
        return child_->AsyncCreateCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
        return child_->AsyncUpdateCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncStopCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::StopClusterRequest const& request) {
        return child_->AsyncStopCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncStartCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::StartClusterRequest const& request) {
        return child_->AsyncStartCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
        return child_->AsyncDeleteCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::Cluster>
ClusterControllerLogging::GetCluster(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::GetClusterRequest const& request) {
        return child_->GetCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::ListClustersResponse>
ClusterControllerLogging::ListClusters(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::ListClustersRequest const& request) {
        return child_->ListClusters(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncDiagnoseCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
        return child_->AsyncDiagnoseCluster(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> ClusterControllerLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google