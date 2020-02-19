#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.utbcore/utbd.pid file instead
utb_pid=$(<~/.utbcore/testnet3/utbd.pid)
sudo gdb -batch -ex "source debug.gdb" utbd ${utb_pid}
