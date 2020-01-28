#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.ctpcore/ctpd.pid file instead
ctp_pid=$(<~/.ctpcore/testnet3/ctpd.pid)
sudo gdb -batch -ex "source debug.gdb" ctpd ${ctp_pid}
