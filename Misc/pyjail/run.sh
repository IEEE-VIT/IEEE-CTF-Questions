#!/bin/bash
set -m
python server.py &
socat -dd TCP4-LISTEN:6969,fork,reuseaddr EXEC:"python jail.py",pty,stderr
fg %1

