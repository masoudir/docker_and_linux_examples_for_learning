FROM ubuntu:22.04

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    apt-utils \
    coreutils \
    nano \
    make \
    cmake \
    gcc \
    g++ \
    gdb

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=
