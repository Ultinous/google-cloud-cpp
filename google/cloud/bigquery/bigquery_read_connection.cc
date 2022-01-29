// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/bigquery_read_connection.h"
#include "google/cloud/bigquery/bigquery_read_options.h"
#include "google/cloud/bigquery/internal/bigquery_read_connection_impl.h"
#include "google/cloud/bigquery/internal/bigquery_read_option_defaults.h"
#include "google/cloud/bigquery/internal/bigquery_read_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryReadConnection::~BigQueryReadConnection() = default;

StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
BigQueryReadConnection::CreateReadSession(
    google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::bigquery::storage::v1::ReadRowsResponse>
BigQueryReadConnection::ReadRows(
    google::cloud::bigquery::storage::v1::ReadRowsRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>(
      []() -> absl::variant<
               Status, google::cloud::bigquery::storage::v1::ReadRowsResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
BigQueryReadConnection::SplitReadStream(
    google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<BigQueryReadConnection> MakeBigQueryReadConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 BigQueryReadPolicyOptionList>(options,
                                                               __func__);
  options = bigquery_internal::BigQueryReadDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = bigquery_internal::CreateDefaultBigQueryReadStub(background->cq(),
                                                               options);
  return std::make_shared<bigquery_internal::BigQueryReadConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<bigquery::BigQueryReadConnection> MakeBigQueryReadConnection(
    std::shared_ptr<BigQueryReadStub> stub, Options options) {
  options = BigQueryReadDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<bigquery_internal::BigQueryReadConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
