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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/internal/services_connection_impl.h"
#include "google/cloud/appengine/internal/services_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServicesConnectionImpl::ServicesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<appengine_internal::ServicesStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), appengine_internal::ServicesDefaultOptions(
                                  ServicesConnection::options()))) {}

StreamRange<google::appengine::v1::Service>
ServicesConnectionImpl::ListServices(
    google::appengine::v1::ListServicesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<appengine::ServicesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServices(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::Service>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::appengine::v1::ListServicesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::appengine::v1::ListServicesRequest const& request) {
              return stub->ListServices(context, request);
            },
            r, function_name);
      },
      [](google::appengine::v1::ListServicesResponse r) {
        std::vector<google::appengine::v1::Service> result(r.services().size());
        auto& messages = *r.mutable_services();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::appengine::v1::Service> ServicesConnectionImpl::GetService(
    google::appengine::v1::GetServiceRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetService(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::GetServiceRequest const& request) {
        return stub_->GetService(context, request);
      },
      request, __func__);
}

future<StatusOr<google::appengine::v1::Service>>
ServicesConnectionImpl::UpdateService(
    google::appengine::v1::UpdateServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::Service>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::appengine::v1::UpdateServiceRequest const& request) {
        return stub->AsyncUpdateService(cq, std::move(context), request);
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
          google::appengine::v1::Service>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateService(request), polling_policy(), __func__);
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
ServicesConnectionImpl::DeleteService(
    google::appengine::v1::DeleteServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::OperationMetadataV1>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::appengine::v1::DeleteServiceRequest const& request) {
        return stub->AsyncDeleteService(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::appengine::v1::OperationMetadataV1>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteService(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
