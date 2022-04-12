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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#include "google/cloud/dialogflow_cx/agents_connection.h"
#include "google/cloud/dialogflow_cx/agents_options.h"
#include "google/cloud/dialogflow_cx/internal/agents_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/agents_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/agents_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsConnection::~AgentsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnection::ListAgents(
    google::cloud::dialogflow::cx::v3::
        ListAgentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Agent>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsConnection::GetAgent(
    google::cloud::dialogflow::cx::v3::GetAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnection::CreateAgent(
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnection::UpdateAgent(
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AgentsConnection::DeleteAgent(
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>
AgentsConnection::ExportAgent(
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>> AgentsConnection::RestoreAgent(
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsConnection::ValidateAgent(
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsConnection::GetAgentValidationResult(
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AgentsConnection> MakeAgentsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AgentsPolicyOptionList>(options, __func__);
  options = dialogflow_cx_internal::AgentsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_cx_internal::CreateDefaultAgentsStub(background->cq(),
                                                              options);
  return std::make_shared<dialogflow_cx_internal::AgentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dialogflow_cx::AgentsConnection> MakeAgentsConnection(
    std::shared_ptr<AgentsStub> stub, Options options) {
  options = AgentsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<dialogflow_cx_internal::AgentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google