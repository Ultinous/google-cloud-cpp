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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_SESSION_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_SESSION_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_es/session_entity_types_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SessionEntityTypesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SessionEntityTypesClient`. To do
 * so, construct an object of type `SessionEntityTypesClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockSessionEntityTypesConnection
    : public dialogflow_es::SessionEntityTypesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::dialogflow::v2::SessionEntityType>,
      ListSessionEntityTypes,
      (google::cloud::dialogflow::v2::ListSessionEntityTypesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::SessionEntityType>,
              GetSessionEntityType,
              (google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::SessionEntityType>,
      CreateSessionEntityType,
      (google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::SessionEntityType>,
      UpdateSessionEntityType,
      (google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteSessionEntityType,
      (google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_SESSION_ENTITY_TYPES_CONNECTION_H
