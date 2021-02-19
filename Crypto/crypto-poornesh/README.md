# CTF Name: Crypto : GAMELOFT-IN-GIBBERISH

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![CRYPTO category](https://img.shields.io/badge/category-crypto-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0001-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
None <br />
Hints:
`Rivest, Shamir, and Adleman like Shewag because Shewag doesn’t believe in SINGLES. Now you know why they exist in pairs!`

## Attached files
-  main

## Summary
It is a Cryptography question based on Reverse Engineering the encryptor executable, which might require tools like ghidra/IDA for decompiling and understanding the logic and figuring out what to decrypt and what key should be used to get the flag.

## Detailed solution

1. Download the main executable.
2. Open the main file in ghidra/IDA (Reverse Engineering Tools)
3. Decompile the code and then understand the code.

4. Find the Encrypted texts and then decoded them by base64, this may result in a cipher which is salted (remove the characters between %), on decoding, it will result in a link to another download another executable file.
5. The new file requires 2 keys Public and Private, either by brute-forcing the one-digit keys or by using the clues and analyzing the pattern of few ciphertexts in the decompiled main file, one can get both the keys and can decrypt the file using that file.
6. In this case it's 3 and 7 as they are the prime numbers and the ciphertext repeats in these 2 lowest prime numbers which are single digit.
7. Once it is decrypted, the flag is obtained.

## Screenshots
ZIP file containing all screenshots related to this challenge:
<a href="https://bit.ly/gameloftingibberish">Screenshots</a>

## Flag
```
ieeectfintermediateatasphalt
```
