This CTF starts with a URL:

there will be a login page. After searching in the source code you will find a javascript with username and pswd.
Password will be encrypted with MD5. After decoding the MD5 you will get the admin password.
after you pass the authentication... a page opens saying..*Mr.Robot knows your flag..."

after you add /robot/ after the 
there will also be a robot.txt file where there will be direct hint to adding /robot/ after the link 

You reach a webpage with a hint given as , maybe a combinations of alpha and numbers help you go through..BTW 5 is not brutal to target. u click on the button and a file is downloaded.

The zip file is protected with a pswd. You create a wordlist of all combos 0f 5, and try to bruteforce..
bruteforcing will give you a audio file..

HINT:zip file name: esrever==when read backwards ,"reverse" and imspeed.mp3


doing audio manipulation, by reversing and making it 200% slow you will hear something as hex.

Now you know there is something in the HEX of the file.

Using hexdump and scrolling the end u will get the flag. 