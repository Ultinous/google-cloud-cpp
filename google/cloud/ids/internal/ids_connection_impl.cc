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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/internal/ids_connection_impl.h"
#include "google/cloud/ids/internal/ids_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IDSConnectionImpl::IDSConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<ids_internal::IDSStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          ids_internal::IDSDefaultOptions(IDSConnection::options()))) {}

StreamRange<google::cloud::ids::v1::Endpoint> IDSConnectionImpl::ListEndpoints(
    google::cloud::ids::v1::ListEndpointsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<ids::IDSRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListEndpoints(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::ids::v1::Endpoint>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::ids::v1::ListEndpointsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::ids::v1::ListEndpointsRequest const& request) {
              return stub->ListEndpoints(context, request);
            },
            r, function_name);
      },
      [](google::cloud::ids::v1::ListEndpointsResponse r) {
        std::vector<google::cloud::ids::v1::Endpoint> result(
            r.endpoints().size());
        auto& messages = *r.mutable_endpoints();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::ids::v1::Endpoint> IDSConnectionImpl::GetEndpoint(
    google::cloud::ids::v1::GetEndpointRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEndpoint(request),
      [this](grpc::ClientContext& context,
             google::cloud::ids::v1::GetEndpointRequest const& request) {
        return stub_->GetEndpoint(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::ids::v1::Endpoint>>
IDSConnectionImpl::CreateEndpoint(
    google::cloud::ids::v1::CreateEndpointRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::ids::v1::Endpoint>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::ids::v1::CreateEndpointRequest const& request) {
        return stub->AsyncCreateEndpoint(cq, std::move(context), request);
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
          google::cloud::ids::v1::Endpoint>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateEndpoint(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSConnectionImpl::DeleteEndpoint(
    google::cloud::ids::v1::DeleteEndpointRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::ids::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::ids::v1::DeleteEndpointRequest const& request) {
        return stub->AsyncDeleteEndpoint(cq, std::move(context), request);
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
          google::cloud::ids::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteEndpoint(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_internal
}  // namespace cloud
}  // namespace google
