
Instruction to configure the question

Run the server.py with the command python server.py (Since its python 2)
Then run socat -dd TCP4-LISTEN:9000,fork,reuseaddr EXEC:"python jail.py",pty,stderr (Listen port can be anythin which you like)

The player should now be able to use nc [ip] [port] to login into the question

Flag for the question is IEEECTF{3val_!5_7@M3}
