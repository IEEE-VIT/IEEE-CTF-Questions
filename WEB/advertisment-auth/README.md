# CTF Name: Web : SECRETPASS

![date](https://img.shields.io/badge/date-10.11.2020-brightgreen.svg)  
![WEB category](https://img.shields.io/badge/category-web-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-PoorneshAdhithya-blue)](https://github.com/Tesla369)

## Description
Exchange your thoughts not your Passwords. <br />
Hints:
`Both the tokens are accepted to buy biscuits`

## Attached files
-  url to access the site

## Summary
It is a Web challenge based on API hacking where JWT-Auth tokens are manipulated in order to gain admin privilege, this is due to a vulnerability as the JWT tokens accepts both HMAC (HS256 - Symmetric) and RSA (RS256 - Asymmetric) algorithms, Hence exchanging the signatures could result in account takeover.

## Detailed solution

-  Go to Login Page.
-  Login as user:user.
-  Intercept the request while logging in.
-  Decode the jwt tokens using base64 decoder.
-  Tamper the tokens RS256 > HS256 and user > admin.
-  Encrypt with the JWT with Public Key using HS256 algorithm.
-  Public Key can be obtained from Page Source. Code for generaing the required pyload is attached <a href="https://bit.ly/JWTauth">Here</a>.
-  Now replace the existing jwt token with the new one which has HS256 signature and forward your request.
-  The username and password of admin will be displayed.
-  Now login using the exposed credentials.
-  Flag is obtained from the cookies.
-  A Video POC writeup is attached for complete Walkthrough of this challenge. <a href="https://bit.ly/jwtWalkthrough">Walkthrough Video</a>

## Flag
```
IEEECTF{Y0U_C4nT_cR4Ck_M3}
```
