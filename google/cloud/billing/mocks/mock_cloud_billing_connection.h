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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_MOCKS_MOCK_CLOUD_BILLING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_MOCKS_MOCK_CLOUD_BILLING_CONNECTION_H

#include "google/cloud/billing/cloud_billing_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace billing_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockCloudBillingConnection : public billing::CloudBillingConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::billing::v1::BillingAccount>, GetBillingAccount,
      (google::cloud::billing::v1::GetBillingAccountRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::billing::v1::BillingAccount>,
              ListBillingAccounts,
              (google::cloud::billing::v1::ListBillingAccountsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::billing::v1::BillingAccount>,
      UpdateBillingAccount,
      (google::cloud::billing::v1::UpdateBillingAccountRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::billing::v1::BillingAccount>,
      CreateBillingAccount,
      (google::cloud::billing::v1::CreateBillingAccountRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::billing::v1::ProjectBillingInfo>,
      ListProjectBillingInfo,
      (google::cloud::billing::v1::ListProjectBillingInfoRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::billing::v1::ProjectBillingInfo>,
      GetProjectBillingInfo,
      (google::cloud::billing::v1::GetProjectBillingInfoRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::billing::v1::ProjectBillingInfo>,
      UpdateProjectBillingInfo,
      (google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_MOCKS_MOCK_CLOUD_BILLING_CONNECTION_H
