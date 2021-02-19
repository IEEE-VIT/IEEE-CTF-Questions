# OSINT

![date](https://img.shields.io/badge/date-08.11.2020-brightgreen.svg)  
![OSINT category](https://img.shields.io/badge/category-osint-lightgrey.svg)
![score](https://img.shields.io/badge/score-100-blue.svg)
![solves](https://img.shields.io/badge/solves-0000-brightgreen.svg)
[![author](https://img.shields.io/badge/author-ShubhamPalriwala-blue)](https://github.com/ShubhamPalriwala)

## Description
IEEE-VIT’s website has a noob.

## Attached files
- n00b.wav
- swirled.png

## Summary
A detailed OSINT question that takes you through our Social Media handles and involves a lot of Google searches here and there.<br>
Can be solved just with online tools too.


## Detailed solution

- The first thing to do is get to [IEEE-VIT's](www.ieeevit.org) website and check the source code.
- There you will find a comment that says     `ieee-ctf? /images/n00b.wav`.
- Now heading to the URL, you will receive a DTMF (dual tone multiple-frequency) encoded audio file (you can use online tools too but make sure you decode the complete file as some of them just decode the first 30 seconds).<br>
- You need to decode this tone (it is a normal keypad tone thus it is easy to guess).<br>
- After decoding, you will get a string of numbers: 
```
73 69 69 69 86 73 84 115 32 73 78 83 84 65 71 82 65 77 32 66 82 65 78 68 73 78 71 32 73 83 32 83 85 83 80 73 67 73 79 85 83
```
- This is ASCII code and decrypting it,
you will get the string as: 
```
IEEE-VITs INSTAGRAM BRANDING IS SUSPICIOUS
```

- Now, go to IEEE-VITs Instagram and you will find a post that says the `The Importance of Branding`. <Br>
- That post has a location attached to it as `Cipher`.<br>
- This location has 2 other posts, one is a blank white image with a caption as: <br>
`Why should I post this here? I have something really cool on my profile`.<br>
- This user's Instagram handle is `plusandminusisimportant`.<br>
- On opening that user's profile, it has a post that looks like it has been `swirled`. <br>
- Also, the user's bio is `Why am I following around 400 people?`.<br>
- This is a hint as you have to swirl the image in a clockwise and anticlockwise direction (this is why the user handle says `plus` and `minus`) by 400 points to get the two parts of the hint:<br>
(swirling can be done online as well as any photo editing tool too).
```
- ieee-vit claps JuSt
- on medium
```
- The hint here is that `J` and `S` are capital which is JS hinting to JavaScript.<br>
- Find IEEE-VIT Techloop on Medium.<br>
- Under the claps, you will find 2 JavaScript blogs, the JS with IoT blog has a comment from a user named `My_Fav_No_JS_6`.
- On opening that user's profile, they find a URL (https://textsaver.flap.tv/lists/3omc).
- If you notice, again in the username of this user, instead of <b>is</b>, <b>js</b> is used thus something to do with javascript.
- After some googling, you will find out there's a JavaScript encoding called JSFuck which encodes JavaScript in just 6 characters.
- That Pastebin URL leads them to a JSfuck encoded string which on decrypting gives: 
```
Two of our 2019-20 board members made it to Google's Open Source's Summer program.
One of them also published a paper on Distributed Machine Learning on Differentially Private Data
While surfing Twitter a couple of months ago, I found out he likes the robotic arm.
```
- Go to IEEE-VIT's website and open the social media links of all the board members.
- Mayank Shah's Twitter Bio as well as Linkedin has GSOC mentioned and so does Ashvath's Linkedin.
- Now Mayank's website (mentioned in his Twitter bio) has his Resume which talks about his journal publication.
Thus it is Mayank who is mentioned in the question, now going to his Twitter likes, on 25th Aug, he liked Vinay's Robotic Arm video which has another comment from a user that says:<br>
`Vist my profile and there's the last clue`.<br>
- A pinned tweet from this user on their profile says:
```
GAKKO AND I DEVELOPED OUR FIRST STYLISH IDEA IN THE CHATROOM
```

- On googling Gakko and IEEE together, they will find IEEE-VIT's Gakko GitHub repo.
- They need to get to the chatroom development branch,
- Here they need to get in the .idea directory,
- Now in the codestyles directory (as the hint says stylish),
- They will find an `opensourced.md` file.

- This file contains 28 lines of lorem ipsum however as the hint says `Everybody remembers the first, not the second`
they get the flag by connecting all the 28 lines' first letter.


## Flag
```
IEEECTF{OPENSOURCEISTHEBEST}
```
