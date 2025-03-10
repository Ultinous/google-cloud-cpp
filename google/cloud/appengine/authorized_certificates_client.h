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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_AUTHORIZED_CERTIFICATES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_AUTHORIZED_CERTIFICATES_CLIENT_H

#include "google/cloud/appengine/authorized_certificates_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages SSL certificates a user is authorized to administer. A user can
/// administer any SSL certificates applicable to their authorized domains.
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
class AuthorizedCertificatesClient {
 public:
  explicit AuthorizedCertificatesClient(
      std::shared_ptr<AuthorizedCertificatesConnection> connection,
      Options opts = {});
  ~AuthorizedCertificatesClient();

  //@{
  // @name Copy and move support
  AuthorizedCertificatesClient(AuthorizedCertificatesClient const&) = default;
  AuthorizedCertificatesClient& operator=(AuthorizedCertificatesClient const&) =
      default;
  AuthorizedCertificatesClient(AuthorizedCertificatesClient&&) = default;
  AuthorizedCertificatesClient& operator=(AuthorizedCertificatesClient&&) =
      default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(AuthorizedCertificatesClient const& a,
                         AuthorizedCertificatesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AuthorizedCertificatesClient const& a,
                         AuthorizedCertificatesClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists all SSL certificates the user is authorized to administer.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::ListAuthorizedCertificatesRequest,google/appengine/v1/appengine.proto#L791}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::AuthorizedCertificate,google/appengine/v1/certificate.proto#L32}
  ///
  /// [google.appengine.v1.ListAuthorizedCertificatesRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L791}
  /// [google.appengine.v1.AuthorizedCertificate]:
  /// @googleapis_reference_link{google/appengine/v1/certificate.proto#L32}
  ///
  StreamRange<google::appengine::v1::AuthorizedCertificate>
  ListAuthorizedCertificates(
      google::appengine::v1::ListAuthorizedCertificatesRequest request,
      Options opts = {});

  ///
  /// Gets the specified SSL certificate.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::GetAuthorizedCertificateRequest,google/appengine/v1/appengine.proto#L815}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::AuthorizedCertificate,google/appengine/v1/certificate.proto#L32}
  ///
  /// [google.appengine.v1.GetAuthorizedCertificateRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L815}
  /// [google.appengine.v1.AuthorizedCertificate]:
  /// @googleapis_reference_link{google/appengine/v1/certificate.proto#L32}
  ///
  StatusOr<google::appengine::v1::AuthorizedCertificate>
  GetAuthorizedCertificate(
      google::appengine::v1::GetAuthorizedCertificateRequest const& request,
      Options opts = {});

  ///
  /// Uploads the specified SSL certificate.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::CreateAuthorizedCertificateRequest,google/appengine/v1/appengine.proto#L837}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::AuthorizedCertificate,google/appengine/v1/certificate.proto#L32}
  ///
  /// [google.appengine.v1.CreateAuthorizedCertificateRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L837}
  /// [google.appengine.v1.AuthorizedCertificate]:
  /// @googleapis_reference_link{google/appengine/v1/certificate.proto#L32}
  ///
  StatusOr<google::appengine::v1::AuthorizedCertificate>
  CreateAuthorizedCertificate(
      google::appengine::v1::CreateAuthorizedCertificateRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified SSL certificate. To renew a certificate and maintain
  /// its existing domain mappings, update `certificate_data` with a new
  /// certificate. The new certificate must be applicable to the same domains as
  /// the original certificate. The certificate `display_name` may also be
  /// updated.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::UpdateAuthorizedCertificateRequest,google/appengine/v1/appengine.proto#L846}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::AuthorizedCertificate,google/appengine/v1/certificate.proto#L32}
  ///
  /// [google.appengine.v1.UpdateAuthorizedCertificateRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L846}
  /// [google.appengine.v1.AuthorizedCertificate]:
  /// @googleapis_reference_link{google/appengine/v1/certificate.proto#L32}
  ///
  StatusOr<google::appengine::v1::AuthorizedCertificate>
  UpdateAuthorizedCertificate(
      google::appengine::v1::UpdateAuthorizedCertificateRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified SSL certificate.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::DeleteAuthorizedCertificateRequest,google/appengine/v1/appengine.proto#L861}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.appengine.v1.DeleteAuthorizedCertificateRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L861}
  ///
  Status DeleteAuthorizedCertificate(
      google::appengine::v1::DeleteAuthorizedCertificateRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<AuthorizedCertificatesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_AUTHORIZED_CERTIFICATES_CLIENT_H
