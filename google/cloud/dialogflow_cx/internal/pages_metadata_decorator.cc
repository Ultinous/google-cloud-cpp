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
// source: google/cloud/dialogflow/cx/v3/page.proto

#include "google/cloud/dialogflow_cx/internal/pages_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/page.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PagesMetadata::PagesMetadata(std::shared_ptr<PagesStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListPagesResponse>
PagesMetadata::ListPages(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListPagesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListPages(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Page> PagesMetadata::GetPage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetPageRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetPage(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Page> PagesMetadata::CreatePage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreatePageRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreatePage(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Page> PagesMetadata::UpdatePage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request) {
  SetMetadata(context, "page.name=" + request.page().name());
  return child_->UpdatePage(context, request);
}

Status PagesMetadata::DeletePage(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeletePageRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeletePage(context, request);
}

void PagesMetadata::SetMetadata(grpc::ClientContext& context,
                                std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void PagesMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google