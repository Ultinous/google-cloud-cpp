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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_MOCKS_MOCK_API_GATEWAY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_MOCKS_MOCK_API_GATEWAY_CONNECTION_H

#include "google/cloud/apigateway/api_gateway_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace apigateway_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockApiGatewayServiceConnection
    : public apigateway::ApiGatewayServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::apigateway::v1::Gateway>, ListGateways,
              (google::cloud::apigateway::v1::ListGatewaysRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::apigateway::v1::Gateway>, GetGateway,
              (google::cloud::apigateway::v1::GetGatewayRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::Gateway>>, CreateGateway,
      (google::cloud::apigateway::v1::CreateGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::Gateway>>, UpdateGateway,
      (google::cloud::apigateway::v1::UpdateGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>,
      DeleteGateway,
      (google::cloud::apigateway::v1::DeleteGatewayRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::apigateway::v1::Api>, ListApis,
              (google::cloud::apigateway::v1::ListApisRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::apigateway::v1::Api>, GetApi,
              (google::cloud::apigateway::v1::GetApiRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::apigateway::v1::Api>>, CreateApi,
              (google::cloud::apigateway::v1::CreateApiRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::apigateway::v1::Api>>, UpdateApi,
              (google::cloud::apigateway::v1::UpdateApiRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>,
      DeleteApi,
      (google::cloud::apigateway::v1::DeleteApiRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::apigateway::v1::ApiConfig>,
              ListApiConfigs,
              (google::cloud::apigateway::v1::ListApiConfigsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigateway::v1::ApiConfig>, GetApiConfig,
      (google::cloud::apigateway::v1::GetApiConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>,
      CreateApiConfig,
      (google::cloud::apigateway::v1::CreateApiConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>,
      UpdateApiConfig,
      (google::cloud::apigateway::v1::UpdateApiConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>,
      DeleteApiConfig,
      (google::cloud::apigateway::v1::DeleteApiConfigRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_MOCKS_MOCK_API_GATEWAY_CONNECTION_H
