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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_STUB_FACTORY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_STUB_FACTORY_H

#include "google/cloud/iap/internal/identity_aware_proxy_o_auth_stub.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<IdentityAwareProxyOAuthServiceStub>
CreateDefaultIdentityAwareProxyOAuthServiceStub(
    google::cloud::CompletionQueue cq, Options const& options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_STUB_FACTORY_H