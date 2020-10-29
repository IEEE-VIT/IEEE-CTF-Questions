#!/usr/bin/env python
import sys
import socket
import resource

resource.setrlimit(resource.RLIMIT_NPROC, (0, 0))

def want_key():
  s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
  s.connect("/tmp/server")
  r = s.recv(64)
  s.close()
  return r

sys.stdout.write(">>> ")
sys.stdout.flush()

if want_key() is eval(raw_input()):
  print ("Did you get the key?")
else:
  print ("Fail!")
