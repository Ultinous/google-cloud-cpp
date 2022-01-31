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
// source: google/monitoring/v3/group_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_GROUP_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_GROUP_LOGGING_DECORATOR_H

#include "google/cloud/monitoring/internal/group_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GroupServiceLogging : public GroupServiceStub {
 public:
  ~GroupServiceLogging() override = default;
  GroupServiceLogging(std::shared_ptr<GroupServiceStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> components);

  StatusOr<google::monitoring::v3::ListGroupsResponse> ListGroups(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupsRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> GetGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::GetGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> CreateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> UpdateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateGroupRequest const& request) override;

  Status DeleteGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::ListGroupMembersResponse> ListGroupMembers(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupMembersRequest const& request) override;

 private:
  std::shared_ptr<GroupServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // GroupServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_GROUP_LOGGING_DECORATOR_H