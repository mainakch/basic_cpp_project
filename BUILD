COPTS = ["-Iinclude"]

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
