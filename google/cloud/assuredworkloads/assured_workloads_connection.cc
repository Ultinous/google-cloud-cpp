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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/assuredworkloads/assured_workloads_options.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_option_defaults.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceConnection::~AssuredWorkloadsServiceConnection() =
    default;

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceConnection::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::assuredworkloads::v1::Workload>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AssuredWorkloadsServiceConnection::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::ListWorkloads(
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Workload>>(
      std::move(request),
      [](google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&) {
        return StatusOr<
            google::cloud::assuredworkloads::v1::ListWorkloadsResponse>{};
      },
      [](google::cloud::assuredworkloads::v1::ListWorkloadsResponse const&) {
        return std::vector<google::cloud::assuredworkloads::v1::Workload>();
      });
}

namespace {
class AssuredWorkloadsServiceConnectionImpl
    : public AssuredWorkloadsServiceConnection {
 public:
  AssuredWorkloadsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<assuredworkloads_internal::AssuredWorkloadsServiceStub>
          stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<AssuredWorkloadsServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<AssuredWorkloadsServiceBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<AssuredWorkloadsServicePollingPolicyOption>()->clone()),
        idempotency_policy_(
            options
                .get<AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~AssuredWorkloadsServiceConnectionImpl() override = default;

  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::assuredworkloads::v1::Workload>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                   request) {
          return stub->AsyncCreateWorkload(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::assuredworkloads::v1::Workload>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateWorkload(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateWorkload(request),
        [this](grpc::ClientContext& context,
               google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
                   request) { return stub_->UpdateWorkload(context, request); },
        request, __func__);
  }

  Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteWorkload(request),
        [this](grpc::ClientContext& context,
               google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
                   request) { return stub_->DeleteWorkload(context, request); },
        request, __func__);
  }

  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetWorkload(request),
        [this](grpc::ClientContext& context,
               google::cloud::assuredworkloads::v1::GetWorkloadRequest const&
                   request) { return stub_->GetWorkload(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AssuredWorkloadsServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListWorkloads(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::assuredworkloads::v1::Workload>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::assuredworkloads::v1::
                         ListWorkloadsRequest const& request) {
                return stub->ListWorkloads(context, request);
              },
              r, function_name);
        },
        [](google::cloud::assuredworkloads::v1::ListWorkloadsResponse r) {
          std::vector<google::cloud::assuredworkloads::v1::Workload> result(
              r.workloads().size());
          auto& messages = *r.mutable_workloads();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<assuredworkloads_internal::AssuredWorkloadsServiceStub> stub_;
  std::unique_ptr<AssuredWorkloadsServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<AssuredWorkloadsServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AssuredWorkloadsServicePolicyOptionList>(
      options, __func__);
  options = assuredworkloads_internal::AssuredWorkloadsServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      assuredworkloads_internal::CreateDefaultAssuredWorkloadsServiceStub(
          background->cq(), options);
  return std::make_shared<AssuredWorkloadsServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<assuredworkloads::AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceConnection(
    std::shared_ptr<AssuredWorkloadsServiceStub> stub, Options options) {
  options = AssuredWorkloadsServiceDefaultOptions(std::move(options));
  return std::make_shared<
      assuredworkloads::AssuredWorkloadsServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google