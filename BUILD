load("@rules_pkg//pkg:tar.bzl", "pkg_tar")
load("@rules_pkg//pkg:deb.bzl", "pkg_deb")

COPTS = ["-std=c++17" ]

cc_library(
    name = "point",
    srcs = ["lib/point.cc"],
    hdrs = ["include/point.h"],
    copts = COPTS,
)

cc_binary(
    name = "app",
    srcs = ["src/app.cc"],
    copts = COPTS,
    linkopts = [
    "-lboost_program_options",
    ],
    deps = [
        ":point",
    ],
)

cc_test(
    name = "test_suite",
    size = "small",
    srcs = ["tests/point_test.cc"],
    copts = COPTS,
    deps = [
        ":point",
        "@com_google_googletest//:gtest_main",
    ],
)

# build deb archive

pkg_tar(
    name = "basic_app",
    srcs = ["//:app"],
    mode = "0755",
    package_dir = "/usr/local/bin",
    strip_prefix = "/src",
)

pkg_tar(
    name = "debian-data",
    extension = "tar.gz",
    deps = [
        ":basic_app",
    ],
)

pkg_deb(
    name = "debian_app",
    architecture = "amd64",
    data = ":debian-data",
    depends = [
        "zlib1g-dev",
        "unzip",
    ],
    description = "Basic C++ app",
    maintainer = "Author <author@domain.org>",
    package = "basic_app",
    version = "0.0.1",
)
