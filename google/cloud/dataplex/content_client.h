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
// source: google/cloud/dataplex/v1/content.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_CONTENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_CONTENT_CLIENT_H

#include "google/cloud/dataplex/content_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// ContentService manages Notebook and SQL Scripts for Dataplex.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ContentServiceClient {
 public:
  explicit ContentServiceClient(
      std::shared_ptr<ContentServiceConnection> connection, Options opts = {});
  ~ContentServiceClient();

  //@{
  // @name Copy and move support
  ContentServiceClient(ContentServiceClient const&) = default;
  ContentServiceClient& operator=(ContentServiceClient const&) = default;
  ContentServiceClient(ContentServiceClient&&) = default;
  ContentServiceClient& operator=(ContentServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(ContentServiceClient const& a,
                         ContentServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ContentServiceClient const& a,
                         ContentServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Create a content.
  ///
  /// @param parent  Required. The resource name of the parent lake:
  ///  projects/{project_id}/locations/{location_id}/lakes/{lake_id}
  /// @param content  Required. Content resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.CreateContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L153}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      std::string const& parent,
      google::cloud::dataplex::v1::Content const& content, Options opts = {});

  ///
  /// Create a content.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataplex::v1::CreateContentRequest,google/cloud/dataplex/v1/content.proto#L153}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.CreateContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L153}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      google::cloud::dataplex::v1::CreateContentRequest const& request,
      Options opts = {});

  ///
  /// Update a content. Only supports full resource update.
  ///
  /// @param content  Required. Update description.
  ///  Only fields specified in `update_mask` are updated.
  /// @param update_mask  Required. Mask of fields to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.UpdateContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L172}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      google::cloud::dataplex::v1::Content const& content,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Update a content. Only supports full resource update.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataplex::v1::UpdateContentRequest,google/cloud/dataplex/v1/content.proto#L172}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.UpdateContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L172}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      google::cloud::dataplex::v1::UpdateContentRequest const& request,
      Options opts = {});

  ///
  /// Delete a content.
  ///
  /// @param name  Required. The resource name of the content:
  ///  projects/{project_id}/locations/{location_id}/lakes/{lake_id}/content/{content_id}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataplex.v1.DeleteContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L186}
  ///
  Status DeleteContent(std::string const& name, Options opts = {});

  ///
  /// Delete a content.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataplex::v1::DeleteContentRequest,google/cloud/dataplex/v1/content.proto#L186}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataplex.v1.DeleteContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L186}
  ///
  Status DeleteContent(
      google::cloud::dataplex::v1::DeleteContentRequest const& request,
      Options opts = {});

  ///
  /// Get a content resource.
  ///
  /// @param name  Required. The resource name of the content:
  ///  projects/{project_id}/locations/{location_id}/lakes/{lake_id}/content/{content_id}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.GetContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L242}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      std::string const& name, Options opts = {});

  ///
  /// Get a content resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataplex::v1::GetContentRequest,google/cloud/dataplex/v1/content.proto#L242}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.GetContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L242}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      google::cloud::dataplex::v1::GetContentRequest const& request,
      Options opts = {});

  ///
  /// Gets the access control policy for a contentitem resource. A `NOT_FOUND`
  /// error is returned if the resource does not exist. An empty policy is
  /// returned if the resource exists but does not have a policy set on it.
  ///
  /// Caller must have Google IAM `dataplex.content.getIamPolicy` permission
  /// on the resource.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  ///
  /// Gets the access control policy for a contentitem resource. A `NOT_FOUND`
  /// error is returned if the resource does not exist. An empty policy is
  /// returned if the resource exists but does not have a policy set on it.
  ///
  /// Caller must have Google IAM `dataplex.content.getIamPolicy` permission
  /// on the resource.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the access control policy on the specified contentitem resource.
  /// Replaces any existing policy.
  ///
  /// Caller must have Google IAM `dataplex.content.setIamPolicy` permission
  /// on the resource.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns the caller's permissions on a resource.
  /// If the resource does not exist, an empty set of
  /// permissions is returned (a `NOT_FOUND` error is not returned).
  ///
  /// A caller is not required to have Google IAM permission to make this
  /// request.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

  ///
  /// List content.
  ///
  /// @param parent  Required. The resource name of the parent lake:
  ///  projects/{project_id}/locations/{location_id}/lakes/{lake_id}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.ListContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L198}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StreamRange<google::cloud::dataplex::v1::Content> ListContent(
      std::string const& parent, Options opts = {});

  ///
  /// List content.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataplex::v1::ListContentRequest,google/cloud/dataplex/v1/content.proto#L198}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataplex::v1::Content,google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  /// [google.cloud.dataplex.v1.ListContentRequest]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/content.proto#L198}
  /// [google.cloud.dataplex.v1.Content]:
  /// @googleapis_reference_link{google/cloud/dataplex/v1/analyze.proto#L160}
  ///
  StreamRange<google::cloud::dataplex::v1::Content> ListContent(
      google::cloud::dataplex::v1::ListContentRequest request,
      Options opts = {});

 private:
  std::shared_ptr<ContentServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_CONTENT_CLIENT_H
