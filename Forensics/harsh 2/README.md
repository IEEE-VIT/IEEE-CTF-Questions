# CTF Name: Forensic-Get your hands dirty

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![FORENSIC category](https://img.shields.io/badge/category-forensic-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0012-brightgreen.svg)
[![author](https://img.shields.io/badge/author-HarshSinghal-blue)](https://github.com/hsrambo07)

## Description
Get your hands dirty is a Forensic category problem based on corrupted file analysis.

## Attached files
- save_me_please.dd

## Summary
It is a Forensic question, which involves a corrupt file, having a bad signature.<br>
This challenge requires only one tool to solve and analysis of the file based on file signature and strings.

## Detailed solution

- You can download the file first which is in .dd format.
- After you analyze the file with $ file save_me_please.dd u will see output as invalid format.
- If you briefly check the file headers u will see the file header/signature is corrupted.
- You can also use online recovery tool to get the fixed file, or use hexdump and try to match the signatures with some know ones and you will get a GIF file. `[Here are some list of signatures](https://en.wikipedia.org/wiki/List_of_file_signatures)` 
- Signature from the corrupted file 47 49 46 `38 39 61` and after fixing file 23 38 42 `38 39 61`
- Opening the GIF file gives us some encrypted text, which needs to be decoded in base 64
- Decoding the text gives us the flag.

## Flag
```
IEEECTF{corpt_imAg3}
```
