FROM ubuntu:22.04 as build

ENV DEBIAN_FRONTEND=noninteractive

COPY packages.txt /

RUN apt-get update \
 && apt-get install -y \
      -o APT::Immediate-Configure=false $(cat /packages.txt) \
 && rm -rf /var/lib/apt/lists/*

COPY requirements.txt /

RUN python3 -m pip install --no-cache-dir -r /requirements.txt

COPY .bash_aliases /root/.bash_aliases

RUN mkdir /esa
WORKDIR /esa
