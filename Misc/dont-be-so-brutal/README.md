# CTF Name: Misc : dont-be-so-brutal 

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![FORENSIC category](https://img.shields.io/badge/category-misc-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-HarshSinghal-blue)](https://github.com/hsrambo07)

## Description
You will find me in hell
Hints:
`Deep down somewhere, i feel u goin too fast :)`

## Attached files
-  url

## Summary
It is a Misc question based on Web and Forensics, which requires online tools for manipulation, decrypting and get down along with the final flag.

## Detailed solution

- There will be a link which will lead you to a plain login page. 
- Close inspection of the login page shows
```
<script>
  var attempt = 3;
function validate(){
var username = document.getElementById("username").value;
var password = document.getElementById("password").value;
var password =md5(password);
if ( username == "admin" && password == "c13d23675b7a621212c3a6bb07e0e8df"){
alert ("Login successfully");
window.location = $.name; 
return false;
}
}
</script>
```
- This is a js script which shows, `the username value to be admin and password as MD5 hashed`. Cracking the MD5 hash using online tools will give u password as `hackerman`.
- After putting correct credentials, it will redirect to a page, which gives us a token..
- Without token it will show this
 ![alt text](https://i.ibb.co/P99ywgD/1.jpg)
- As u enter the token in the header, it will say Mr. Robot knows your flag
![alt text](https://i.ibb.co/WPh48TK/3.jpg)
- after some manipulation with the url,adding this /robot will take you to this
![alt text](https://i.ibb.co/99z7zyJ/2.jpg)

- There will be a zip file to download after u visit this url, The file will be password protected.
- The /robot page has the hint for the combinations to use for bruteforce..
- Bruteforcing will lead to a cracking of the mp3 file, which after audio manipulation results out as hex as audio..
- Hence checking up the string simply will result out the flag for this question
## Flag
```
IEEECTF{mr_h4ck_me}
```
