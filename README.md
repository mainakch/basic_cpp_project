# Basic C++ project

This repository contains a basic C++ project structure with widely accepted
conventions for common SW development needs.

Useful patterns, idioms and conventions will be backported to this repository
on a regular basis.

## Conventions adopted

This project uses:

- the [Google Test Framework](https://github.com/google/googletest) for
  testing,
- [Bazel](https://bazel.build) as a build system,
- [Doxygen](https://www.doxygen.nl/manual/docblocks.html) for source code
  documentation,
- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) to format C++
  code,
- [Docker](https://www.docker.com) as an environment for the build system, and
- [Google style guide](https://google.github.io/styleguide/cppguide.html) for
  naming and project layout conventions.

## Usage

[Build](https://docs.docker.com/engine/reference/commandline/build/) the docker
image, then use that environment to run the build system. Consider
[sharing](https://docs.docker.com/engine/reference/run/#volume-shared-filesystems)
the source code repository on the host filesystem with the container (at
`/home/developer/github`) to make development more efficient.

Once inside the docker or an equivalent environment, the build system may be
run as follows:

- build: `bazel build //:app`,
- test: `bazel test //:test_suite --test_output=all`,
- clean: `bazel clean`.

## Discussions

The following sections describe other relevant aspects of a normal development
workflow.

### Auto-formatting code

Consistent usage of an auto-formatter simplifies day-to-day development and
review. The following tools are recommended for the respective file types:

- Markdown: [mdformat](https://github.com/executablebooks/mdformat),
- Bazel build files:
  [buildifier](https://github.com/bazelbuild/buildtools/blob/master/buildifier/README.md),
  and
- C++ source and header files:
  [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html).

### Other references

For well-thought-out guidelines on producing maintainable code,
[CppCoreGuidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
is highly recommended.
