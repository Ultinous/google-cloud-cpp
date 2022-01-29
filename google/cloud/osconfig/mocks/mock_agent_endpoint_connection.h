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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_MOCKS_MOCK_AGENT_ENDPOINT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_MOCKS_MOCK_AGENT_ENDPOINT_CONNECTION_H

#include "google/cloud/osconfig/agent_endpoint_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace osconfig_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockAgentEndpointServiceConnection
    : public osconfig::AgentEndpointServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::osconfig::agentendpoint::v1::
                              ReceiveTaskNotificationResponse>,
              ReceiveTaskNotification,
              (google::cloud::osconfig::agentendpoint::v1::
                   ReceiveTaskNotificationRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>,
      StartNextTask,
      (google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::osconfig::agentendpoint::v1::
                           ReportTaskProgressResponse>,
              ReportTaskProgress,
              (google::cloud::osconfig::agentendpoint::v1::
                   ReportTaskProgressRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::osconfig::agentendpoint::v1::
                           ReportTaskCompleteResponse>,
              ReportTaskComplete,
              (google::cloud::osconfig::agentendpoint::v1::
                   ReportTaskCompleteRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>,
      RegisterAgent,
      (google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>,
      ReportInventory,
      (google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_MOCKS_MOCK_AGENT_ENDPOINT_CONNECTION_H
