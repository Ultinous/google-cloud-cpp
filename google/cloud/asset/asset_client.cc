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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/asset_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceClient::AssetServiceClient(
    std::shared_ptr<AssetServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AssetServiceClient::~AssetServiceClient() = default;

future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
AssetServiceClient::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset> AssetServiceClient::ListAssets(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::ListAssetsRequest request;
  request.set_parent(parent);
  return connection_->ListAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset> AssetServiceClient::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAssets(std::move(request));
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceClient::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchGetAssetsHistory(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::CreateFeed(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::CreateFeedRequest request;
  request.set_parent(parent);
  return connection_->CreateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::GetFeed(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::GetFeedRequest request;
  request.set_name(name);
  return connection_->GetFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFeed(request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceClient::ListFeeds(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::ListFeedsRequest request;
  request.set_parent(parent);
  return connection_->ListFeeds(request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceClient::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFeeds(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::UpdateFeed(
    google::cloud::asset::v1::Feed const& feed, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::UpdateFeedRequest request;
  *request.mutable_feed() = feed;
  return connection_->UpdateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeed(request);
}

Status AssetServiceClient::DeleteFeed(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::DeleteFeedRequest request;
  request.set_name(name);
  return connection_->DeleteFeed(request);
}

Status AssetServiceClient::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeed(request);
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceClient::SearchAllResources(
    std::string const& scope, std::string const& query,
    std::vector<std::string> const& asset_types, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::SearchAllResourcesRequest request;
  request.set_scope(scope);
  request.set_query(query);
  *request.mutable_asset_types() = {asset_types.begin(), asset_types.end()};
  return connection_->SearchAllResources(request);
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceClient::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchAllResources(std::move(request));
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceClient::SearchAllIamPolicies(std::string const& scope,
                                         std::string const& query,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::SearchAllIamPoliciesRequest request;
  request.set_scope(scope);
  request.set_query(query);
  return connection_->SearchAllIamPolicies(request);
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceClient::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchAllIamPolicies(std::move(request));
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceClient::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnalyzeIamPolicy(request);
}

future<StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
AssetServiceClient::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnalyzeIamPolicyLongrunning(request);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceClient::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AnalyzeMove(request);
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
AssetServiceClient::QueryAssets(
    google::cloud::asset::v1::QueryAssetsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->QueryAssets(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::CreateSavedQuery(
    std::string const& parent,
    google::cloud::asset::v1::SavedQuery const& saved_query,
    std::string const& saved_query_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::CreateSavedQueryRequest request;
  request.set_parent(parent);
  *request.mutable_saved_query() = saved_query;
  request.set_saved_query_id(saved_query_id);
  return connection_->CreateSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::CreateSavedQuery(
    google::cloud::asset::v1::CreateSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::GetSavedQuery(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::GetSavedQueryRequest request;
  request.set_name(name);
  return connection_->GetSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::GetSavedQuery(
    google::cloud::asset::v1::GetSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSavedQuery(request);
}

StreamRange<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::ListSavedQueries(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::ListSavedQueriesRequest request;
  request.set_parent(parent);
  return connection_->ListSavedQueries(request);
}

StreamRange<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::ListSavedQueries(
    google::cloud::asset::v1::ListSavedQueriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSavedQueries(std::move(request));
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::UpdateSavedQuery(
    google::cloud::asset::v1::SavedQuery const& saved_query,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::UpdateSavedQueryRequest request;
  *request.mutable_saved_query() = saved_query;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceClient::UpdateSavedQuery(
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSavedQuery(request);
}

Status AssetServiceClient::DeleteSavedQuery(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::asset::v1::DeleteSavedQueryRequest request;
  request.set_name(name);
  return connection_->DeleteSavedQuery(request);
}

Status AssetServiceClient::DeleteSavedQuery(
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSavedQuery(request);
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
AssetServiceClient::BatchGetEffectiveIamPolicies(
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchGetEffectiveIamPolicies(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google
