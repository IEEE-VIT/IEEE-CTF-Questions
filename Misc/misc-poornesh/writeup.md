1. use steghide and get the hidden text file from the .wav file where the password is the name of the composer of that song (passphrase: mozart)
2. hidden file will have an rot13 encoded link with a clue to decode it 
3. once I decode the text i will get the link to download next .wav file
4. By using SSTV I will decode the audio file which will show me a picture of a QR code and a UID
5. Now this QR code link will redirect me to a webpage which has an account takeover vulnerability. 
6. After exploiting that vulnerability, we can see a profile with name, photo, and bio
7. bio will have the link to another .wav file.
8. Now to find the hidden text in that .wav file, we have to use sonic visualizer.
9. Once we get that text, we should use steghide and find the hidden text file from the picture in that profile(dp) where the password is the text which was decoded from the .wav file using sonic visualizer (passphrase: symphony) 
10. Now this text file will contain an encrypted flag.
11. There will be clues given to decrypt the flag using autociphers (key: 600)
12. Once it's decrypted the flag is found (flag: doremifasolati)
