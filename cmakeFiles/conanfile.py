from conans import ConanFile

class UltinousGoogleCloudCppDeps(ConanFile):
    requires = (
      ("boost/1.73.0"),
      ("abseil/20211102.0"),
      ("c-ares/1.18.1"),
      ("crc32c/1.1.2"),
      ("googleapis/cci.20220711"),
      ("grpc/1.45.2"),
      ("grpc-proto/cci.20220627"),
      ("libcurl/7.84.0"),
      ("nlohmann_json/3.10.5"),
      ("openssl/1.1.1q"),
      ("protobuf/3.21.4"),
      ("re2/20220201"),
      ("zlib/1.2.12")
    )
    generators = "cmake_find_package"
    default_options = {
      "boost:i18n_backend_icu": True,
      "icu:data_packaging": "static",
    }
