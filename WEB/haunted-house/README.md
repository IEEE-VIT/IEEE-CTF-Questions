# CTF Name: Web : HAPPY-HALLOWEEN!

![date](https://img.shields.io/badge/date-11.11.2020-brightgreen.svg)  
![WEB category](https://img.shields.io/badge/category-web-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
Exchange your thoughts not your Passwords. <br />
Hints:
`We know that truth is bitter, but please provide a true statement!`

## Attached files
-  url to access the site

## Summary
It is a Web challenge based on SQLi and File Upload Vulnerability, where a remote attacker is able to access admin privileges by bypassing the admin login page due to improper input validation, and then due to improper validation of files results in a php injected file to execute system commands.

## Detailed solution

-  Open Login Page by clicking Help Me.
-  Change the theme by clicking on login, make sure it's url is nigol.php (otherwise you will be misdirected)
-  Now Bypass the Login page using SQLi (sample query username: 1'OR'1'='1'-- - and password can be anything which doesn't matter as it's commented anyways).
-  Now you will get access to an File Upload page where you must upload a php file which contains this specific payload: <?php system(ls); ?>
-  make sure the extension of your file is either .php2 or .php3
-  The payload file has been attached <a href="https://bit.ly/ctfpayload">HERE</a>
-  Once you upload the file and click submit, the flag will be displayed.
-  A Video POC writeup is attached for complete Walkthrough of this challenge. <a href="https://bit.ly/happyhallowenctf">Walkthrough Video</a>

## Flag
```
IEEECTF{4Br4K4D4bR4_H4PPY_H4LL0W33N!}
```
