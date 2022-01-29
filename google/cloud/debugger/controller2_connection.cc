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
// source: google/devtools/clouddebugger/v2/controller.proto

#include "google/cloud/debugger/controller2_connection.h"
#include "google/cloud/debugger/controller2_options.h"
#include "google/cloud/debugger/internal/controller2_connection_impl.h"
#include "google/cloud/debugger/internal/controller2_option_defaults.h"
#include "google/cloud/debugger/internal/controller2_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

Controller2Connection::~Controller2Connection() = default;

StatusOr<google::devtools::clouddebugger::v2::RegisterDebuggeeResponse>
Controller2Connection::RegisterDebuggee(
    google::devtools::clouddebugger::v2::RegisterDebuggeeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::clouddebugger::v2::ListActiveBreakpointsResponse>
Controller2Connection::ListActiveBreakpoints(
    google::devtools::clouddebugger::v2::ListActiveBreakpointsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::clouddebugger::v2::UpdateActiveBreakpointResponse>
Controller2Connection::UpdateActiveBreakpoint(
    google::devtools::clouddebugger::v2::UpdateActiveBreakpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<Controller2Connection> MakeController2Connection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 Controller2PolicyOptionList>(options,
                                                              __func__);
  options = debugger_internal::Controller2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = debugger_internal::CreateDefaultController2Stub(background->cq(),
                                                              options);
  return std::make_shared<debugger_internal::Controller2ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<debugger::Controller2Connection> MakeController2Connection(
    std::shared_ptr<Controller2Stub> stub, Options options) {
  options = Controller2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<debugger_internal::Controller2ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google
