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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_API_GATEWAY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_API_GATEWAY_CONNECTION_H

#include "google/cloud/apigateway/api_gateway_connection_idempotency_policy.h"
#include "google/cloud/apigateway/internal/api_gateway_retry_traits.h"
#include "google/cloud/apigateway/internal/api_gateway_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apigateway {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ApiGatewayServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        apigateway_internal::ApiGatewayServiceRetryTraits>;

using ApiGatewayServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        apigateway_internal::ApiGatewayServiceRetryTraits>;

using ApiGatewayServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        apigateway_internal::ApiGatewayServiceRetryTraits>;

class ApiGatewayServiceConnection {
 public:
  virtual ~ApiGatewayServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::apigateway::v1::Gateway> ListGateways(
      google::cloud::apigateway::v1::ListGatewaysRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      google::cloud::apigateway::v1::GetGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  CreateGateway(
      google::cloud::apigateway::v1::CreateGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  UpdateGateway(
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request);

  virtual StreamRange<google::cloud::apigateway::v1::Api> ListApis(
      google::cloud::apigateway::v1::ListApisRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      google::cloud::apigateway::v1::GetApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::cloud::apigateway::v1::CreateApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::cloud::apigateway::v1::UpdateApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApi(google::cloud::apigateway::v1::DeleteApiRequest const& request);

  virtual StreamRange<google::cloud::apigateway::v1::ApiConfig> ListApiConfigs(
      google::cloud::apigateway::v1::ListApiConfigsRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      google::cloud::apigateway::v1::GetApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  CreateApiConfig(
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  UpdateApiConfig(
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request);
};

std::shared_ptr<ApiGatewayServiceConnection> MakeApiGatewayServiceConnection(
    Options options = {});

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
                                Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_API_GATEWAY_CONNECTION_H
