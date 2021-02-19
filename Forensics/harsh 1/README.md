# CTF Name: Forensic : Scare me to A.Zip

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![FORENSIC category](https://img.shields.io/badge/category-forensic-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-HarshSinghal-blue)](https://github.com/hsrambo07)

## Description
Scare me to A.Zip is a forensic category question, which takes up user presence of mind and analysis of the situation presented.
Hints:
1. my fingers are sweaty, please understand my typos…
2. Why I am so bad at guesses 

## Attached files
-  url

## Summary
It is a Forensic question, which involves close inspection of the html page and basic steagnographic tools such as outguess.

## Detailed solution

- When u visit the webpage, you will see some weird characters on the page.
- There also a div container at the bottom u can inspect the source code and get the link for the next file which will be an image and as per the guess on file analysis is steagonised, Let us call this image file `guess_me.jpg`. 
- One thing here, the `black bg is actually a steagonised image` whose password u can get after cracking the characters on the page.
- As the hint says, typos that means, if u look closely at your keyboard and check the alphabets below those special character see, it will decode to `QUIT == !&*%`
- Now, you know the password for the background image, before that in order to download the background image, right clicks are disabled, so u needa the download the html page and get the background image from that.
- We can use [online tools](https://futureboy.us/stegano/decinput.html) to get the hidden file from the background image.
- The hidden file contains the password for the `guess_me.jpg` file.
- the second file on analysis will show some file hidden in guess_me.jpg, as the hint says `i m bad at guesses` , so we can use outguess technique to get the hidden file from the base image file(guess_me.jpg). 
- But before we outguess, we need the name for the hidden file. The name of this CTF problem is `Scare me to A.zip` , here `A.zip` is the hint, which is the name of the hidden file.
- After extracting the Zip file, there will be a protected txt file in zip, which is just to revolve you around things, the `flag is in the strings of the zip file`.
- Even if u try to crack the password of the zip file, the text file move u to check strings of the zip, and there goes your flag.

## Flag
```
Flag- IEEECTF{5ku!!}
```
