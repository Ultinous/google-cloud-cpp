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
// source: google/logging/v2/logging.proto

#include "google/cloud/logging/logging_service_v2_connection.h"
#include "google/cloud/logging/internal/logging_service_v2_connection_impl.h"
#include "google/cloud/logging/internal/logging_service_v2_option_defaults.h"
#include "google/cloud/logging/internal/logging_service_v2_stub_factory.h"
#include "google/cloud/logging/logging_service_v2_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LoggingServiceV2Connection::~LoggingServiceV2Connection() = default;

Status LoggingServiceV2Connection::DeleteLog(
    google::logging::v2::DeleteLogRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2Connection::WriteLogEntries(
    google::logging::v2::WriteLogEntriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::logging::v2::LogEntry>
LoggingServiceV2Connection::ListLogEntries(
    google::logging::v2::ListLogEntriesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogEntry>>(
      std::move(request),
      [](google::logging::v2::ListLogEntriesRequest const&) {
        return StatusOr<google::logging::v2::ListLogEntriesResponse>{};
      },
      [](google::logging::v2::ListLogEntriesResponse const&) {
        return std::vector<google::logging::v2::LogEntry>();
      });
}

StreamRange<google::api::MonitoredResourceDescriptor>
LoggingServiceV2Connection::ListMonitoredResourceDescriptors(
    google::logging::v2::ListMonitoredResourceDescriptorsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::MonitoredResourceDescriptor>>(
      std::move(request),
      [](google::logging::v2::ListMonitoredResourceDescriptorsRequest const&) {
        return StatusOr<
            google::logging::v2::ListMonitoredResourceDescriptorsResponse>{};
      },
      [](google::logging::v2::ListMonitoredResourceDescriptorsResponse const&) {
        return std::vector<google::api::MonitoredResourceDescriptor>();
      });
}

StreamRange<std::string> LoggingServiceV2Connection::ListLogs(
    google::logging::v2::ListLogsRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      std::move(request),
      [](google::logging::v2::ListLogsRequest const&) {
        return StatusOr<google::logging::v2::ListLogsResponse>{};
      },
      [](google::logging::v2::ListLogsResponse const&) {
        return std::vector<std::string>();
      });
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::logging::v2::TailLogEntriesRequest,
    google::logging::v2::TailLogEntriesResponse>>
LoggingServiceV2Connection::AsyncTailLogEntries() {
  return absl::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::logging::v2::TailLogEntriesRequest,
          google::logging::v2::TailLogEntriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<LoggingServiceV2Connection> MakeLoggingServiceV2Connection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 LoggingServiceV2PolicyOptionList>(options,
                                                                   __func__);
  options =
      logging_internal::LoggingServiceV2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = logging_internal::CreateDefaultLoggingServiceV2Stub(
      background->cq(), options);
  return std::make_shared<logging_internal::LoggingServiceV2ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace logging_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<logging::LoggingServiceV2Connection>
MakeLoggingServiceV2Connection(std::shared_ptr<LoggingServiceV2Stub> stub,
                               Options options) {
  options = LoggingServiceV2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<logging_internal::LoggingServiceV2ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_internal
}  // namespace cloud
}  // namespace google
