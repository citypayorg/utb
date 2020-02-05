FROM debian:stretch
LABEL maintainer="Ctp Developers <dev@citypay.org>"
LABEL description="Dockerised CtpCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
