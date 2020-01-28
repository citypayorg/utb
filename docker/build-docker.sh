#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-ctppay/ctpd-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/ctpd docker/bin/
cp $BUILD_DIR/src/ctp-cli docker/bin/
cp $BUILD_DIR/src/ctp-tx docker/bin/
strip docker/bin/ctpd
strip docker/bin/ctp-cli
strip docker/bin/ctp-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
