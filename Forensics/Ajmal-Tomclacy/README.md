# Tom Clacy

![date](https://img.shields.io/badge/date-27.01.2021-brightgreen.svg)  
![OSINT category](https://img.shields.io/badge/category-forensics-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0109-brightgreen.svg)
[![author](https://img.shields.io/badge/author-pwned17-blue)](https://github.com/pwned-17)

## Description
Im tired of my data getting leaked....

## Attached files
- tomclacy.html

## Summary
The webpage has paragraphs in which the flag is hidden using Zero Width steganography. 

## Detailed solution

- The website contains a quote from Tom Clancy's The Patriot Games.

- After reseaching about The Patriot Games, you will find something known as Canary Trap.

- Canary Trap is a way to detect information leakage.

- While learning about the Canary Trap, you would land up in Canary trap's [wikipedia page](https://en.m.wikipedia.org/wiki/Canary_trap), where theres a mention of zero width steganography
- Now you need to copy the quote given in the website and use a Zero Width steganography decoder tool such as https://offdev.net/demos/zwsp-steg-js to extract the data from the given text.


## Flag
```
IEEECTF{0_WIDTH_J@CK_R@Y@N_3N0UGH?}
```