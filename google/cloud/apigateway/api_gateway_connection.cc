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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/api_gateway_connection.h"
#include "google/cloud/apigateway/api_gateway_options.h"
#include "google/cloud/apigateway/internal/api_gateway_option_defaults.h"
#include "google/cloud/apigateway/internal/api_gateway_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigateway {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiGatewayServiceConnection::~ApiGatewayServiceConnection() = default;

StreamRange<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceConnection::ListGateways(
    google::cloud::apigateway::v1::ListGatewaysRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::Gateway>>(
      std::move(request),
      [](google::cloud::apigateway::v1::ListGatewaysRequest const&) {
        return StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>{};
      },
      [](google::cloud::apigateway::v1::ListGatewaysResponse const&) {
        return std::vector<google::cloud::apigateway::v1::Gateway>();
      });
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceConnection::GetGateway(
    google::cloud::apigateway::v1::GetGatewayRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnection::CreateGateway(
    google::cloud::apigateway::v1::CreateGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Gateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnection::UpdateGateway(
    google::cloud::apigateway::v1::UpdateGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Gateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteGateway(
    google::cloud::apigateway::v1::DeleteGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::apigateway::v1::Api>
ApiGatewayServiceConnection::ListApis(
    google::cloud::apigateway::v1::ListApisRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::Api>>(
      std::move(request),
      [](google::cloud::apigateway::v1::ListApisRequest const&) {
        return StatusOr<google::cloud::apigateway::v1::ListApisResponse>{};
      },
      [](google::cloud::apigateway::v1::ListApisResponse const&) {
        return std::vector<google::cloud::apigateway::v1::Api>();
      });
}

StatusOr<google::cloud::apigateway::v1::Api>
ApiGatewayServiceConnection::GetApi(
    google::cloud::apigateway::v1::GetApiRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnection::CreateApi(
    google::cloud::apigateway::v1::CreateApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Api>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnection::UpdateApi(
    google::cloud::apigateway::v1::UpdateApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Api>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteApi(
    google::cloud::apigateway::v1::DeleteApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceConnection::ListApiConfigs(
    google::cloud::apigateway::v1::ListApiConfigsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::ApiConfig>>(
      std::move(request),
      [](google::cloud::apigateway::v1::ListApiConfigsRequest const&) {
        return StatusOr<
            google::cloud::apigateway::v1::ListApiConfigsResponse>{};
      },
      [](google::cloud::apigateway::v1::ListApiConfigsResponse const&) {
        return std::vector<google::cloud::apigateway::v1::ApiConfig>();
      });
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceConnection::GetApiConfig(
    google::cloud::apigateway::v1::GetApiConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnection::CreateApiConfig(
    google::cloud::apigateway::v1::CreateApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::ApiConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnection::UpdateApiConfig(
    google::cloud::apigateway::v1::UpdateApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::ApiConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteApiConfig(
    google::cloud::apigateway::v1::DeleteApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class ApiGatewayServiceConnectionImpl : public ApiGatewayServiceConnection {
 public:
  ApiGatewayServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<apigateway_internal::ApiGatewayServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<ApiGatewayServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<ApiGatewayServiceBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<ApiGatewayServicePollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<ApiGatewayServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~ApiGatewayServiceConnectionImpl() override = default;

  StreamRange<google::cloud::apigateway::v1::Gateway> ListGateways(
      google::cloud::apigateway::v1::ListGatewaysRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<ApiGatewayServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListGateways(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::apigateway::v1::Gateway>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::apigateway::v1::ListGatewaysRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::apigateway::v1::ListGatewaysRequest const&
                         request) {
                return stub->ListGateways(context, request);
              },
              r, function_name);
        },
        [](google::cloud::apigateway::v1::ListGatewaysResponse r) {
          std::vector<google::cloud::apigateway::v1::Gateway> result(
              r.gateways().size());
          auto& messages = *r.mutable_gateways();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      google::cloud::apigateway::v1::GetGatewayRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetGateway(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::apigateway::v1::GetGatewayRequest const& request) {
          return stub_->GetGateway(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> CreateGateway(
      google::cloud::apigateway::v1::CreateGatewayRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::Gateway>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::CreateGatewayRequest const&
                   request) {
          return stub->AsyncCreateGateway(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::Gateway>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateGateway(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::Gateway>> UpdateGateway(
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::Gateway>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::UpdateGatewayRequest const&
                   request) {
          return stub->AsyncUpdateGateway(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::Gateway>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateGateway(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(google::cloud::apigateway::v1::DeleteGatewayRequest const&
                    request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::DeleteGatewayRequest const&
                   request) {
          return stub->AsyncDeleteGateway(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteGateway(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StreamRange<google::cloud::apigateway::v1::Api> ListApis(
      google::cloud::apigateway::v1::ListApisRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<ApiGatewayServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListApis(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::apigateway::v1::Api>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::apigateway::v1::ListApisRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::apigateway::v1::ListApisRequest const&
                         request) { return stub->ListApis(context, request); },
              r, function_name);
        },
        [](google::cloud::apigateway::v1::ListApisResponse r) {
          std::vector<google::cloud::apigateway::v1::Api> result(
              r.apis().size());
          auto& messages = *r.mutable_apis();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      google::cloud::apigateway::v1::GetApiRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetApi(request),
        [this](grpc::ClientContext& context,
               google::cloud::apigateway::v1::GetApiRequest const& request) {
          return stub_->GetApi(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::cloud::apigateway::v1::CreateApiRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::Api>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::CreateApiRequest const& request) {
          return stub->AsyncCreateApi(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::Api>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateApi(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::cloud::apigateway::v1::UpdateApiRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::Api>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::UpdateApiRequest const& request) {
          return stub->AsyncUpdateApi(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::Api>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateApi(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>> DeleteApi(
      google::cloud::apigateway::v1::DeleteApiRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::DeleteApiRequest const& request) {
          return stub->AsyncDeleteApi(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteApi(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StreamRange<google::cloud::apigateway::v1::ApiConfig> ListApiConfigs(
      google::cloud::apigateway::v1::ListApiConfigsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<ApiGatewayServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListApiConfigs(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::apigateway::v1::ApiConfig>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::apigateway::v1::ListApiConfigsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::apigateway::v1::ListApiConfigsRequest const&
                         request) {
                return stub->ListApiConfigs(context, request);
              },
              r, function_name);
        },
        [](google::cloud::apigateway::v1::ListApiConfigsResponse r) {
          std::vector<google::cloud::apigateway::v1::ApiConfig> result(
              r.api_configs().size());
          auto& messages = *r.mutable_api_configs();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      google::cloud::apigateway::v1::GetApiConfigRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetApiConfig(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
          return stub_->GetApiConfig(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> CreateApiConfig(
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::ApiConfig>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::CreateApiConfigRequest const&
                   request) {
          return stub->AsyncCreateApiConfig(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::ApiConfig>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateApiConfig(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::ApiConfig>> UpdateApiConfig(
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::ApiConfig>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::UpdateApiConfigRequest const&
                   request) {
          return stub->AsyncUpdateApiConfig(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::ApiConfig>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateApiConfig(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(google::cloud::apigateway::v1::DeleteApiConfigRequest const&
                      request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::apigateway::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::apigateway::v1::DeleteApiConfigRequest const&
                   request) {
          return stub->AsyncDeleteApiConfig(cq, std::move(context), request);
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
            google::cloud::apigateway::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteApiConfig(request),
        polling_policy_prototype_->clone(), __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<apigateway_internal::ApiGatewayServiceStub> stub_;
  std::unique_ptr<ApiGatewayServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<ApiGatewayServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<ApiGatewayServiceConnection> MakeApiGatewayServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ApiGatewayServicePolicyOptionList>(options,
                                                                    __func__);
  options =
      apigateway_internal::ApiGatewayServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = apigateway_internal::CreateDefaultApiGatewayServiceStub(
      background->cq(), options);
  return std::make_shared<ApiGatewayServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace apigateway_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<apigateway::ApiGatewayServiceConnection>
MakeApiGatewayServiceConnection(std::shared_ptr<ApiGatewayServiceStub> stub,
                                Options options) {
  options = ApiGatewayServiceDefaultOptions(std::move(options));
  return std::make_shared<apigateway::ApiGatewayServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_internal
}  // namespace cloud
}  // namespace google