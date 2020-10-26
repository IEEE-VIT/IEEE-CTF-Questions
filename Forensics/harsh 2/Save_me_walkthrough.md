Writeup Ctf SAVE\_ME\_PLEASE

First u will get a .dd extension file. There will be a hint along with it.

save my life signature from bureaucrats and politicians

Upon proper look, when u try hexdump u will notice the header of the file is corrupted.   

U can find the header signatures from wikipedia and try out in the file hex.

after u have successfully found out the header, u will get the image file with some text written

The text is encoded in base64, decoding it will give u the flag

IEEECTF{corpt\_imAg3}
