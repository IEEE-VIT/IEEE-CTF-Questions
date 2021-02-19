# CTF Name: Jails : ZIP-ZAP-ZOOP

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![JAILS category](https://img.shields.io/badge/category-jails-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0008-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
jail number 9003 is open but don’t know how to open it! <br />
Hints:
`Ctrl+F doesn’t work in CLI, How to find it?`

## Attached files
-  URL to ssh

## Summary
It is a Jails question based on figuring out a way to escape the jail/trying to view contents of some files in an unusual way, which might lead to obtain the flag.

## Detailed solution

1. use grep instead of cat in the first jail and then grab the username and password of next jail from a text file `.flag/.ctf`. View bin directory to know about all commands accepted in the jail. 
2. goto next jail and use awk instead of cat and display the contents in a file to get a password which is encoded in base 64
3. Decode it and go back to first jail and there will be a link in one of the text file `.flag/flag.txt`
4. that link will take you to a zip file, now u have to provide the password to extract and to view the contents in zip file
5. you can obtain the flag from the text file flag.txt which has been extracted.

## Screenshots
ZIP file containing all screenshots related to this challenge:
<a href="https://bit.ly/zipzapzoop">Screenshots</a>

## Flag
```
IEEECTF{B45H_3RR0R!_PL3453_TRY_4G41N}
```
