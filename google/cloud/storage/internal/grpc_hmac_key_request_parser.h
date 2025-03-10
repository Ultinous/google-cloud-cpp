// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_HMAC_KEY_REQUEST_PARSER_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_HMAC_KEY_REQUEST_PARSER_H

#include "google/cloud/storage/internal/hmac_key_requests.h"
#include "google/cloud/storage/version.h"
#include <google/storage/v2/storage.pb.h>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

/// Convert JSON requests to gRPC requests and gRPC responses to JSON responses
struct GrpcHmacKeyRequestParser {
  static google::storage::v2::CreateHmacKeyRequest ToProto(
      CreateHmacKeyRequest const&);
  static CreateHmacKeyResponse FromProto(
      google::storage::v2::CreateHmacKeyResponse const&);
  static google::storage::v2::DeleteHmacKeyRequest ToProto(
      DeleteHmacKeyRequest const&);
  static google::storage::v2::GetHmacKeyRequest ToProto(
      GetHmacKeyRequest const&);
  static google::storage::v2::ListHmacKeysRequest ToProto(
      ListHmacKeysRequest const&);
  static ListHmacKeysResponse FromProto(
      google::storage::v2::ListHmacKeysResponse const&);
  static google::storage::v2::UpdateHmacKeyRequest ToProto(
      UpdateHmacKeyRequest const&);
};

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_GRPC_HMAC_KEY_REQUEST_PARSER_H
