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
// source: google/cloud/talent/v4/event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CLIENT_H

#include "google/cloud/talent/event_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service handles client event report.
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
class EventServiceClient {
 public:
  explicit EventServiceClient(
      std::shared_ptr<EventServiceConnection> connection, Options opts = {});
  ~EventServiceClient();

  //@{
  // @name Copy and move support
  EventServiceClient(EventServiceClient const&) = default;
  EventServiceClient& operator=(EventServiceClient const&) = default;
  EventServiceClient(EventServiceClient&&) = default;
  EventServiceClient& operator=(EventServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(EventServiceClient const& a,
                         EventServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EventServiceClient const& a,
                         EventServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Report events issued when end user interacts with customer's application
  /// that uses Cloud Talent Solution. You may inspect the created events in
  /// [self service
  /// tools](https://console.cloud.google.com/talent-solution/overview).
  /// [Learn
  /// more](https://cloud.google.com/talent-solution/docs/management-tools)
  /// about self service tools.
  ///
  /// @param parent  Required. Resource name of the tenant under which the event
  /// is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}", for example,
  ///  "projects/foo/tenants/bar".
  /// @param client_event  Required. Events issued when end user interacts with
  /// customer's application that
  ///  uses Cloud Talent Solution.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::ClientEvent,google/cloud/talent/v4/event.proto#L33}
  ///
  /// [google.cloud.talent.v4.CreateClientEventRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/event_service.proto#L55}
  /// [google.cloud.talent.v4.ClientEvent]:
  /// @googleapis_reference_link{google/cloud/talent/v4/event.proto#L33}
  ///
  StatusOr<google::cloud::talent::v4::ClientEvent> CreateClientEvent(
      std::string const& parent,
      google::cloud::talent::v4::ClientEvent const& client_event,
      Options opts = {});

  ///
  /// Report events issued when end user interacts with customer's application
  /// that uses Cloud Talent Solution. You may inspect the created events in
  /// [self service
  /// tools](https://console.cloud.google.com/talent-solution/overview).
  /// [Learn
  /// more](https://cloud.google.com/talent-solution/docs/management-tools)
  /// about self service tools.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::CreateClientEventRequest,google/cloud/talent/v4/event_service.proto#L55}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::ClientEvent,google/cloud/talent/v4/event.proto#L33}
  ///
  /// [google.cloud.talent.v4.CreateClientEventRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/event_service.proto#L55}
  /// [google.cloud.talent.v4.ClientEvent]:
  /// @googleapis_reference_link{google/cloud/talent/v4/event.proto#L33}
  ///
  StatusOr<google::cloud::talent::v4::ClientEvent> CreateClientEvent(
      google::cloud::talent::v4::CreateClientEventRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<EventServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CLIENT_H
