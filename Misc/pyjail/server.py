#!/usr/bin/env python
# Note: this is not the original server of the challenge.
# I wrote this trying to guess how the original might have been 

import os
import struct
from socket import socket, AF_UNIX, SOCK_STREAM, SOL_SOCKET

SO_PEERCRED = 17 # Pulled from /usr/include/asm-generic/socket.h
SOCKFILE = '/tmp/server'
FLAG = 'IEEECTF{3val_!5_7@M3}'

if os.path.exists(SOCKFILE):
    os.remove(SOCKFILE)

seen_pids = set()
s = socket(AF_UNIX, SOCK_STREAM)

s.bind(SOCKFILE)
#s.setblocking(0)
s.listen(1)

def get_pid(conn):
    # See: http://stackoverflow.com/a/7982749/641317
    creds = conn.getsockopt(SOL_SOCKET, SO_PEERCRED, struct.calcsize('3i'))
    pid, uid, gid = struct.unpack('3i',creds)
    return pid


while True:
    conn, addr = s.accept()
    pid = get_pid(conn)
    if pid in seen_pids:
        message = 'I already sent you the key, stupid!'
    else:
        seen_pids.add(pid)
        message = FLAG

    try:
        conn.send(message)
    except Exception as e:
        print(pid, e)