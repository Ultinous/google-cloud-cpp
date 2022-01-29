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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/key_management_client.h"
#include "google/cloud/kms/internal/key_management_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceClient::KeyManagementServiceClient(
    std::shared_ptr<KeyManagementServiceConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options), kms_internal::KeyManagementServiceDefaultOptions(
                                  connection_->options()))) {}
KeyManagementServiceClient::~KeyManagementServiceClient() = default;

StreamRange<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::ListKeyRings(std::string const& parent,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::ListKeyRingsRequest request;
  request.set_parent(parent);
  return connection_->ListKeyRings(request);
}

StreamRange<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::ListKeyRings(
    google::cloud::kms::v1::ListKeyRingsRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListKeyRings(std::move(request));
}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::ListCryptoKeys(std::string const& parent,
                                           Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::ListCryptoKeysRequest request;
  request.set_parent(parent);
  return connection_->ListCryptoKeys(request);
}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::ListCryptoKeys(
    google::cloud::kms::v1::ListCryptoKeysRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCryptoKeys(std::move(request));
}

StreamRange<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::ListCryptoKeyVersions(std::string const& parent,
                                                  Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::ListCryptoKeyVersionsRequest request;
  request.set_parent(parent);
  return connection_->ListCryptoKeyVersions(request);
}

StreamRange<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::ListCryptoKeyVersions(
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListCryptoKeyVersions(std::move(request));
}

StreamRange<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::ListImportJobs(std::string const& parent,
                                           Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::ListImportJobsRequest request;
  request.set_parent(parent);
  return connection_->ListImportJobs(request);
}

StreamRange<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::ListImportJobs(
    google::cloud::kms::v1::ListImportJobsRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListImportJobs(std::move(request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::GetKeyRing(std::string const& name,
                                       Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GetKeyRingRequest request;
  request.set_name(name);
  return connection_->GetKeyRing(request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::GetKeyRing(
    google::cloud::kms::v1::GetKeyRingRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetKeyRing(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::GetCryptoKey(std::string const& name,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GetCryptoKeyRequest request;
  request.set_name(name);
  return connection_->GetCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::GetCryptoKey(
    google::cloud::kms::v1::GetCryptoKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::GetCryptoKeyVersion(std::string const& name,
                                                Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GetCryptoKeyVersionRequest request;
  request.set_name(name);
  return connection_->GetCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::GetCryptoKeyVersion(
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceClient::GetPublicKey(std::string const& name,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GetPublicKeyRequest request;
  request.set_name(name);
  return connection_->GetPublicKey(request);
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceClient::GetPublicKey(
    google::cloud::kms::v1::GetPublicKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetPublicKey(request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::GetImportJob(std::string const& name,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GetImportJobRequest request;
  request.set_name(name);
  return connection_->GetImportJob(request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::GetImportJob(
    google::cloud::kms::v1::GetImportJobRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetImportJob(request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::CreateKeyRing(
    std::string const& parent, std::string const& key_ring_id,
    google::cloud::kms::v1::KeyRing const& key_ring, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::CreateKeyRingRequest request;
  request.set_parent(parent);
  request.set_key_ring_id(key_ring_id);
  *request.mutable_key_ring() = key_ring;
  return connection_->CreateKeyRing(request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceClient::CreateKeyRing(
    google::cloud::kms::v1::CreateKeyRingRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateKeyRing(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::CreateCryptoKey(
    std::string const& parent, std::string const& crypto_key_id,
    google::cloud::kms::v1::CryptoKey const& crypto_key, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::CreateCryptoKeyRequest request;
  request.set_parent(parent);
  request.set_crypto_key_id(crypto_key_id);
  *request.mutable_crypto_key() = crypto_key;
  return connection_->CreateCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::CreateCryptoKey(
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::CreateCryptoKeyVersion(
    std::string const& parent,
    google::cloud::kms::v1::CryptoKeyVersion const& crypto_key_version,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::CreateCryptoKeyVersionRequest request;
  request.set_parent(parent);
  *request.mutable_crypto_key_version() = crypto_key_version;
  return connection_->CreateCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::CreateCryptoKeyVersion(
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::ImportCryptoKeyVersion(
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ImportCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::CreateImportJob(
    std::string const& parent, std::string const& import_job_id,
    google::cloud::kms::v1::ImportJob const& import_job, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::CreateImportJobRequest request;
  request.set_parent(parent);
  request.set_import_job_id(import_job_id);
  *request.mutable_import_job() = import_job;
  return connection_->CreateImportJob(request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceClient::CreateImportJob(
    google::cloud::kms::v1::CreateImportJobRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateImportJob(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::UpdateCryptoKey(
    google::cloud::kms::v1::CryptoKey const& crypto_key,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::UpdateCryptoKeyRequest request;
  *request.mutable_crypto_key() = crypto_key;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::UpdateCryptoKey(
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCryptoKey(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::UpdateCryptoKeyVersion(
    google::cloud::kms::v1::CryptoKeyVersion const& crypto_key_version,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::UpdateCryptoKeyVersionRequest request;
  *request.mutable_crypto_key_version() = crypto_key_version;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::UpdateCryptoKeyVersion(
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::UpdateCryptoKeyPrimaryVersion(
    std::string const& name, std::string const& crypto_key_version_id,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest request;
  request.set_name(name);
  request.set_crypto_key_version_id(crypto_key_version_id);
  return connection_->UpdateCryptoKeyPrimaryVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceClient::UpdateCryptoKeyPrimaryVersion(
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateCryptoKeyPrimaryVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::DestroyCryptoKeyVersion(std::string const& name,
                                                    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::DestroyCryptoKeyVersionRequest request;
  request.set_name(name);
  return connection_->DestroyCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::DestroyCryptoKeyVersion(
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DestroyCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::RestoreCryptoKeyVersion(std::string const& name,
                                                    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::RestoreCryptoKeyVersionRequest request;
  request.set_name(name);
  return connection_->RestoreCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceClient::RestoreCryptoKeyVersion(
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->RestoreCryptoKeyVersion(request);
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceClient::Encrypt(std::string const& name,
                                    std::string const& plaintext,
                                    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::EncryptRequest request;
  request.set_name(name);
  request.set_plaintext(plaintext);
  return connection_->Encrypt(request);
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceClient::Encrypt(
    google::cloud::kms::v1::EncryptRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->Encrypt(request);
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceClient::Decrypt(std::string const& name,
                                    std::string const& ciphertext,
                                    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::DecryptRequest request;
  request.set_name(name);
  request.set_ciphertext(ciphertext);
  return connection_->Decrypt(request);
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceClient::Decrypt(
    google::cloud::kms::v1::DecryptRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->Decrypt(request);
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceClient::AsymmetricSign(
    std::string const& name, google::cloud::kms::v1::Digest const& digest,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::AsymmetricSignRequest request;
  request.set_name(name);
  *request.mutable_digest() = digest;
  return connection_->AsymmetricSign(request);
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceClient::AsymmetricSign(
    google::cloud::kms::v1::AsymmetricSignRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->AsymmetricSign(request);
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceClient::AsymmetricDecrypt(std::string const& name,
                                              std::string const& ciphertext,
                                              Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::AsymmetricDecryptRequest request;
  request.set_name(name);
  request.set_ciphertext(ciphertext);
  return connection_->AsymmetricDecrypt(request);
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceClient::AsymmetricDecrypt(
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->AsymmetricDecrypt(request);
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceClient::MacSign(std::string const& name,
                                    std::string const& data, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::MacSignRequest request;
  request.set_name(name);
  request.set_data(data);
  return connection_->MacSign(request);
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceClient::MacSign(
    google::cloud::kms::v1::MacSignRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MacSign(request);
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceClient::MacVerify(std::string const& name,
                                      std::string const& data,
                                      std::string const& mac, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::MacVerifyRequest request;
  request.set_name(name);
  request.set_data(data);
  request.set_mac(mac);
  return connection_->MacVerify(request);
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceClient::MacVerify(
    google::cloud::kms::v1::MacVerifyRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->MacVerify(request);
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceClient::GenerateRandomBytes(
    std::string const& location, std::int32_t length_bytes,
    google::cloud::kms::v1::ProtectionLevel protection_level, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::kms::v1::GenerateRandomBytesRequest request;
  request.set_location(location);
  request.set_length_bytes(length_bytes);
  request.set_protection_level(protection_level);
  return connection_->GenerateRandomBytes(request);
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceClient::GenerateRandomBytes(
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GenerateRandomBytes(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms
}  // namespace cloud
}  // namespace google
