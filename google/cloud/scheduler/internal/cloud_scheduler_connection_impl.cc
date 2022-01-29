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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/internal/cloud_scheduler_connection_impl.h"
#include "google/cloud/scheduler/internal/cloud_scheduler_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace scheduler_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudSchedulerConnectionImpl::CloudSchedulerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<scheduler_internal::CloudSchedulerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), scheduler_internal::CloudSchedulerDefaultOptions(
                                  CloudSchedulerConnection::options()))) {}

StreamRange<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::ListJobs(
    google::cloud::scheduler::v1::ListJobsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<scheduler::CloudSchedulerRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::scheduler::v1::Job>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::scheduler::v1::ListJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::scheduler::v1::ListJobsRequest const& request) {
              return stub->ListJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::scheduler::v1::ListJobsResponse r) {
        std::vector<google::cloud::scheduler::v1::Job> result(r.jobs().size());
        auto& messages = *r.mutable_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::GetJob(
    google::cloud::scheduler::v1::GetJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::GetJobRequest const& request) {
        return stub_->GetJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::CreateJob(
    google::cloud::scheduler::v1::CreateJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::CreateJobRequest const& request) {
        return stub_->CreateJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::UpdateJob(
    google::cloud::scheduler::v1::UpdateJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::UpdateJobRequest const& request) {
        return stub_->UpdateJob(context, request);
      },
      request, __func__);
}

Status CloudSchedulerConnectionImpl::DeleteJob(
    google::cloud::scheduler::v1::DeleteJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::DeleteJobRequest const& request) {
        return stub_->DeleteJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::PauseJob(
    google::cloud::scheduler::v1::PauseJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->PauseJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::PauseJobRequest const& request) {
        return stub_->PauseJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::ResumeJob(
    google::cloud::scheduler::v1::ResumeJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ResumeJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::ResumeJobRequest const& request) {
        return stub_->ResumeJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerConnectionImpl::RunJob(
    google::cloud::scheduler::v1::RunJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->RunJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::scheduler::v1::RunJobRequest const& request) {
        return stub_->RunJob(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_internal
}  // namespace cloud
}  // namespace google
