#!/usr/bin/env bash

set -e
set -x

SCRIPT_DIR=$(cd $(dirname $0); pwd)
PRJ_ROOT=${PRJ_ROOT:-$(realpath $SCRIPT_DIR/../..)}

docker run -i -t --rm \
  -v $PRJ_ROOT:/home/dev/workdir \
  -w /home/dev/workdir \
  pgzx:latest \
  $@
