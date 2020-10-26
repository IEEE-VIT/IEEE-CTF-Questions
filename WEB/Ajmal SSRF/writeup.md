The user is provided with a website where, he has an option to request a http url and would load the site.
On viewing the source code the user can find a hint where it says something like stay in home , which should ring a bell about localhost.
So with this the attacker comes to a conlusion that this should be realted to ssrf
But he tries to use http://localhost/ or http://127.0.0.1 which is blocked by a built waf, so after a bit of researching about it he should find ways to bypass the waff.
Then octal encoding and DWORD encoding  would bypass the waf
Another hint given is the cicada mystery whcih can be foound in the flag directory. 
The  cicada 3301 , is just a clue for the port number which the servers is running on

