FROM debian:stretch
LABEL maintainer="Utb Developers <dev@jdjpay.org>"
LABEL description="Dockerised UtbCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
