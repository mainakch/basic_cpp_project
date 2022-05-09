load("@rules_pkg//pkg:tar.bzl", "pkg_tar")
load("@rules_pkg//pkg:deb.bzl", "pkg_deb")
COPTS = [""]

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
    strip_prefix = "/src",
    package_dir = "/usr/local/bin",
    srcs = ["//:app"],
    mode = "0755",
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
    built_using = "unzip (6.0.1)",
    description = "Basic C++ app",
    data = ":debian-data",
    depends = [
        "zlib1g-dev",
        "unzip",
    ],
    maintainer = "Author <author@domain.org>",
    package = "simple_app",
    version = "0.0.1",
)
