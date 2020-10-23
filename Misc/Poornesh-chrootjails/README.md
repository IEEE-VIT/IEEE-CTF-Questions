# ZIP-ZAP-ZOOP:
### WRITEUP
1. use grep to cat in the first jail and then grab the username and password of next jail from a text file
2. goto next jail and use awk to cat a file to get a password
3. go back to first jail and there will be a link in one of the text file
4. that link will take you to a zip file, now u have to provide the password to view the contents in zip file
5. you will able to see a text file with flag in it.

## INSTRUCTIONS
### NOTE: SANDBOXING IS REQUIRED FOR THIS CHALLENGE
<br /><br />
mkdir /root/jailed<br />
cd jailed<br />
mkdir bin/ lib64/ lib/<br />
ldd /bin/bash<br />
cp /lib/x86_64-linux-gnu/libtinfo.so.5 lib/ (DEPENDS ON WHAT IS LISTED IN THE PREVIOUS STEP)<br />
cp /lib/x86_64-linux-gnu/libdl.so.2 lib/<br />
cp /lib/x86_64-linux-gnu/libc.so.6 lib/<br />
cp /lib64/ld-linux-x86-64.so.2 lib64/<br />
cp /bin/bash bin/<br />
<br />
SIMILARLY ADD FOLLOWING COMMANDS:
<br /><br />
ls<br />
cat (after adding rename it to grep)<br />
zip<br />
unzip<br />
id<br />
sudo<br />
<br />
adduser player<br />
nano /etc/ssh/sshd_config<br />
(Go to the end of the file and add the following)<br />
 #define username to apply chroot jail to <br />
Match User player <br />
 #specify chroot jail <br />
ChrootDirectory /root/jailed <br />
<br />
<br />
service ssh restart<br />
<br />
### NOW SIMILARLY CREATE ANEW CHROOT JAIL
<br /><br />
mkdir /root/jail<br />
cd jail<br />
mkdir bin/ lib64/ lib/<br />
ldd /bin/bash<br />
cp /lib/x86_64-linux-gnu/libtinfo.so.5 lib/ (DEPENDS ON WHAT IS LISTED IN THE PREVIOUS STEP)<br />
cp /lib/x86_64-linux-gnu/libdl.so.2 lib/<br />
cp /lib/x86_64-linux-gnu/libc.so.6 lib/<br />
cp /lib64/ld-linux-x86-64.so.2 lib64/<br />
cp /bin/bash bin/<br />
<br />
SIMILARLY ADD FOLLOWING COMMANDS:
<br /><br />
ls<br />
cat (after adding rename it to grep)<br />
zip<br />
unzip<br />
id<br />
sudo<br />
<br />
adduser jailer<br />
nano /etc/ssh/sshd_config<br />
(Go to the end of the file and add the following)<br />
 #define username to apply chroot jail to <br />
Match User jailer<br />
 #specify chroot jail<br />
ChrootDirectory /root/jail<br />
<br />
<br />
service ssh restart<br />
<br />
<br />
FOR OTHER FILES AND FOLDERS, PLEASE REFER TO THE DIRECTORIES<br />
THERE ARE FEW HIDDEN DIRECTORIES AND FILES TOO! DO CHECK THEM OUT.<br />
THERE IS A ZIP FILE WHICH IS Password Protected that contains the flag<br />
The Password of that zip file is: IEEE-CTF-AUTO-JIGGLER-KEY-PASS

### FLAG
FLAG FORMAT: IEEECTF{} <br />
FLAG: IEEECTF{B45H_3RR0R!_PL3453_TRY_4G41N}
