CTF WRITEUP


1.You will be given a zip file.
when you open the zip file, there will be there will be three files. one is not protected,and other two are protected.

one that is not protected contains hint for the password for the protected files in the zip which will encrypted in base64, 

you decode the base64 and open the ther two files.

other two files are an,image and a text file.
the image is stegonised with outguess, the text file containes the hint as outguess and key for it.
2.now u know the outguess key and extract files from the image and you will find a .mp3 file.
that mp3 says strings.

that means there something hidden in the strings of the image , and there you will find your flag.