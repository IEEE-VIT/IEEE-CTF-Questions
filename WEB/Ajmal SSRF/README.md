# CTF Name: Web : SSRF-web01

![date](https://img.shields.io/badge/date-10.12.2020-brightgreen.svg)  
![WEB category](https://img.shields.io/badge/category-web-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0002-brightgreen.svg)
[![author](https://img.shields.io/badge/author-ShaikAjmal-blue)](https://github.com/pwned-17)

## Description
Zuckerberg has created a proxy service to access blocked websites, try it out here. <br />
Hints:
`There is no place like...`

## Attached files
-  url to access the site

## Summary
It is a Web challenge based on Server Side Request Forgery (SSRF) where an attacker has to bypass Web Application Firewall inorder fetch the flag.

## Detailed solution

-  First test it by entering a url (http)
-  Now Press Ctrl+U or View Page Source, you will get a clue "Stay at Home".
-  This clue indicates that you need to proxy to your http://localhost/ or http://127.0.0.1
-  But if you try them those requests are blocked by a built WAF.
-  To get around it, one must research on bypassing WAF.
-  DWORD Octal Encoding would penetrate into bypassing the WAF.
-  Bruteforcing the routes will lead you to a route /flag which is a clue.
-  Now by just pasting those contents in google will lead you to Cicada 3301 mystery which resonates the server's port number 3301.
-  Putting all the pieces together the payload is http://0177.0000.0000.0001:3301.
-  The response of this above payload will result in flag.
-  A Video POC writeup is attached for complete Walkthrough of this challenge. <a href="https://bit.ly/ssrfieeectf">Walkthrough Video</a>

## Flag
```
IEEECTF{H0m3_5w33t_H0M3}
```
