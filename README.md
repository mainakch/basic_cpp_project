# Basic C++ project

This repository contains a basic C++ project structure with widely accepted
conventions for common SW development needs.

This grew out of a need to have a common template to use while starting new C++
projects. This will be updated regularly with useful patterns, idioms and newer
conventions.

It uses:

- the [Google Test Framework](https://github.com/google/googletest) for
  testing,
- [Bazel](https://bazel.build) as a build system,
- [Doxygen](https://www.doxygen.nl/manual/docblocks.html) for source code
  documentation,
- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) to format C++
  code,
- [Docker](https://www.docker.com) as an environment for the build system, and
- [Google style guide](https://google.github.io/styleguide/cppguide.html) for
  stylistic conventions not otherwise specified.

## Usage

[Build](https://docs.docker.com/engine/reference/commandline/build/) the docker
image, then use that environment to run the build system. Consider
[sharing](https://docs.docker.com/engine/reference/run/#volume-shared-filesystems)
the source code repository on the host filesystem with the docker runtime to
make development more efficient.

Once inside the docker or an equivalent environment, the build system may be
run as follows:

- build: `bazel build //:app`
- test: `bazel test //:test_suite`

## Discussions

The following sections describe other relevant aspects of a normal development
workflow.

### Including external dependencies

The project uses various methods to include third party dependencies. The
following are included:

- Dependencies installable in the Docker environment, and
- Git Submodules.

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

For well-thought guidelines on producing maintainable code,
[CppCoreGuidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
is highly recommended.
