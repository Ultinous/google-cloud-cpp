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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/service_usage_client.h"
#include "google/cloud/serviceusage/internal/service_usage_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageClient::ServiceUsageClient(
    std::shared_ptr<ServiceUsageConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options), serviceusage_internal::ServiceUsageDefaultOptions(
                                  connection_->options()))) {}
ServiceUsageClient::~ServiceUsageClient() = default;

future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
ServiceUsageClient::EnableService(
    google::api::serviceusage::v1::EnableServiceRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->EnableService(request);
}

future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
ServiceUsageClient::DisableService(
    google::api::serviceusage::v1::DisableServiceRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DisableService(request);
}

StatusOr<google::api::serviceusage::v1::Service> ServiceUsageClient::GetService(
    google::api::serviceusage::v1::GetServiceRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetService(request);
}

StreamRange<google::api::serviceusage::v1::Service>
ServiceUsageClient::ListServices(
    google::api::serviceusage::v1::ListServicesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListServices(std::move(request));
}

future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
ServiceUsageClient::BatchEnableServices(
    google::api::serviceusage::v1::BatchEnableServicesRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->BatchEnableServices(request);
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageClient::BatchGetServices(
    google::api::serviceusage::v1::BatchGetServicesRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->BatchGetServices(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage
}  // namespace cloud
}  // namespace google
