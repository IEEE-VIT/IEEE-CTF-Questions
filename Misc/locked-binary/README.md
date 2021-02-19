# CTF Name: Binary-Exploitation: locked-binary

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![PWN category](https://img.shields.io/badge/category-pwn-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0004-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
Hey, I tried a lot of combinations. It seems like it's still locked, Could you help me to open it? <br />
Hints:
`One needs to have a good MEMORY power like LiveOverflow`

## Attached files
-  locked

## Summary
It is a Buffer Overflow question based on Reverse Engineering the binary, which might require tools like ghidra/IDA for decompiling and gdb for disassembling.

## Detailed solution

1. run locked binary which asks for a key
2. Try to input different characters and increase the length of the characters until it results in a segmentation fault.
3. Now run the binary with gdb and have a look into functions using `info func`, which shows us 2 user-defined functions and the main function.
4. Disassemble main and look into function calls, where there is only one function being called.
5. So, the objective is to call the function which is not called by the main function.
6. A specially crafted payload can call that function.
7. A Video POC writeup is attached for complete Walkthrough of this challenge with explanation. <a href="https://bit.ly/Walkthr0ugh">Walkthrough Video</a>

## Flag
```
IEEECTF{5Y5t3M_m3M0rY_C0rRuPT3d}
```
