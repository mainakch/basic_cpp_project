FROM ubuntu:22.04

# install prerequisites for bazel install
RUN apt update
RUN apt -y install curl gnupg

# add bazel apt repo
RUN echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list
RUN curl https://bazel.build/bazel-release.pub.gpg | apt-key add -

RUN apt update
RUN apt -y install cmake git build-essential bazel

# add user named developer with id 501
RUN useradd -u 501 -m developer -s /bin/bash

# change to non-root privilege
USER developer

# change shell prompt
RUN echo 'export PS1="[docker] (basic_environment) \w $ "' > ~/.bashrc
RUN echo 'cd ~/github ' >> ~/.bashrc

# keep docker image running indefinitely
ENTRYPOINT ["tail", "-f", "/dev/null"]
