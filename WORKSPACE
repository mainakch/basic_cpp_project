load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
    urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
)

http_archive(
    name = "rules_pkg",
    sha256 = "8a298e832762eda1830597d64fe7db58178aa84cd5926d76d5b744d6558941c2",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_pkg/releases/download/0.7.0/rules_pkg-0.7.0.tar.gz",
        "https://github.com/bazelbuild/rules_pkg/releases/download/0.7.0/rules_pkg-0.7.0.tar.gz",
    ],
)

_RULES_BOOST_COMMIT = "652b21e35e4eeed5579e696da0facbe8dba52b1f"

http_archive(
    name = "com_github_nelhage_rules_boost",
    sha256 = "c1b8b2adc3b4201683cf94dda7eef3fc0f4f4c0ea5caa3ed3feffe07e1fb5b15",
    strip_prefix = "rules_boost-%s" % _RULES_BOOST_COMMIT,
    urls = [
        "https://github.com/nelhage/rules_boost/archive/%s.tar.gz" % _RULES_BOOST_COMMIT,
    ],
)

http_archive(
    name = "cereal",
    build_file = "//third_party:cereal.BUILD",
    sha256 = "16a7ad9b31ba5880dac55d62b5d6f243c3ebc8d46a3514149e56b5e7ea81f85f",
    urls =
        ["https://github.com/USCiLab/cereal/archive/refs/tags/v1.3.2.tar.gz"],
)

load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")

rules_pkg_dependencies()

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()
