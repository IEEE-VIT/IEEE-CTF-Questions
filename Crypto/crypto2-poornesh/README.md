# CTF Name: Crypto : CRYPT-4N4LY5!$

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![CRYPTO category](https://img.shields.io/badge/category-crypto-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
None <br />
Hints:
`Reverse Engineering is an art!`

## Attached files
-  flag.txt
-  encryptor

## Summary
It is a Cryptography question based on Reverse Engineering the encryptor executable, which might require tools like ghidra/IDA for decompiling and understanding the logic such that one can make his own decryptor to get the flag.

## Detailed solution

1. open flag.txt
2. decode the encoded ciphertexts "VHJ5IHRvIGxvb2sgYXQgdGhpbmdzIGZyb20gRGlmZmVyZW50IFBlcnNwZWN0aXZlcyE" which is in Base64.
This will give you "Try to look at things from Different Perspectives!"
3. re the encrypted ciphertexts by reverse-engineering the encryptor executable file
4. reverse both 1st and 2nd encrypted cipher and then write a decryptor code for the encryption algorithm, (A Character's ASCII value into 3 parts whose sum = the ASCII value of the character, if there is a password then it's added). 
5. The sample decryptor is attached.
<a href="https://bit.ly/D3crypt0r">DECRYPTOR</a>
6. First time, decrypt it without a password.
7. You will get the output in plain text as "_REVEROF_SUOIRUF_DNA_TSAF_"
8. now decrypt the 1st cipher with 2nd decrypted ciphertext (which is "_REVEROF_SUOIRUF_DNA_TSAF_") as a Password.
9. Now you will get the Plain text which is the flag
![alt text](https://i.ibb.co/YR9v4My/cryptanalysis.png)
## Flag
```
IEEECTF{Y0U_C4nT_cR4Ck_M3}
```
