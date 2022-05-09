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
