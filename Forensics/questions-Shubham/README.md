# Covered or Concealed

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![warmup category](https://img.shields.io/badge/category-forensics-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0008-brightgreen.svg)
[![author](https://img.shields.io/badge/author-ShubhamPalriwala-blue)](https://github.com/ShubhamPalriwala)

## Description
A beginner level question based on Steganography.

## Attached files
- index.html
- style.css

## Summary
Find the hidden string inside the image using Steganography.<br>
Now, decrypt this Base64 encoded string 7 times to find the flag.

## Detailed solution

- Inspecting the webpage, you will see three comments which will translate in English to "Decode me 7 times".

- Click the Solve Me button which opens an image in a new tab.
- Decrypt the image by any steganography tool or even an online website and you will get the following string of characters:

```
Vm0weE5GVXhTWGhYV0doWVYwZG9WVmx0Y3pGV1ZteHlWMjVrVjJKSGVIbFdNakZIVmpGS2RHVkVRbFZpUm5CUVZtMTRTMk14VG5OYVJtUk9ZV3RXTTFZeFdtdFRNVTVIVm01T1dHSkdjRmhVVkVwdllqRmFjVkpzV214U2F6VllWbTAxVDFWdFNrZFhiR2hYWWxSV1JGcFdXbHBsVlRGVlZXeGFUbFp1UWxsWFZFSlhZakZrU0ZOcldrOVdlbXhoV1ZSR1lVMHhXWGhYYlVaVFRWWndNRlZ0ZUd0VWJGcHpWMWh3VjFKc2NHaFpWRVpoWXpGd1JtSkdTbWxUUlVwWFZtMTRZVk14WkVkWGJrWlRZbFZhVkZSV1dtRk5SbEp6V2tSU2FGWnJjSHBaYWs1dlZqRktjMWRzVG1GU1JWcEVWbGQ0UTFaVk1VVk5SREE5
```
- By the first looks itself, this looks like a Base64 encoded string.
- As the Hint says, by Decoding the above string 7 times you get the flag.

## Flag
```
IEEECTF{N0W_Y0U_KN0W_M7_F4V0UR1T3_NUM83R}
```
