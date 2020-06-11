There will be a Zip file which will ask for password for accessing it. Already a hint is given in the question regarding the password length.
 We will have to bruteforce to crack the password.
It may take around few minutes or so to crack the password. After we have cracked the password, there will be a txt file
in which there will be a string which is a link to a web page which they have to decode using UTF-8
encryption. As soon as we click on the link,it redirects us to a web page. 
There is a hint which says refreshing the web page may help, which further takes them to a new web page. 
There it will be a complete black screen, which will be a image which looks like a background, whose password will be there itself in the image, we may find it using image manipulation. 
The image is stegonised and after putting in the password we will recieve a text file, which gives us hint to further get into the parent files of the web server.

there will be program for buffer overflow, after exploiting which u will get a text
file, containing FLAG. There we get our final flag IEEECTF{Mr_Robot0x_h4CK}