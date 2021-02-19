# CTF Name: Reverse-Engineering: Unbreakable_Lock

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![PWN category](https://img.shields.io/badge/category-re-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
Hey, I tried a lot of combinations. It seems like it's still locked, Could you help me to open it? <br />
Hints:
`Y0u must Resgister y0ur value in the hist0ry registers`

## Attached files
-  Unbreakable_Lock

## Summary
It is Reverse Engineering based question where one must tamper the rergisters of $eax in order to fetch the flag, This challenge would require gdb for disassembling.

## Detailed solution

1. run locked binary with a key as an argument
2. Try to input different characters and increase the length of the characters until it results in a segmentation fault.
3. Now run the binary with gdb and `disas main`, now you can see a strcmp, which is unsafe as it doesn't strict compare 2 strings.
4. Set a breakpoint after strcmp, and run the program with any argument as a key.
5. Now in that breakpoint, tamper the $eax value to 0.
6. Now if you continue the program the FLAG is displayed.
7. A Video POC writeup is attached for complete Walkthrough of this challenge with explanation. <a href="http://bit.ly/reveng-ctf">Walkthrough Video</a>

## Flag
```
IEEECTF{H4KUN4_MAT4TA_F0r3V3R}
```
