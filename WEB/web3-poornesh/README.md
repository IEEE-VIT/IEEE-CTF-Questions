# SECRETPASS

### WriteUp
Go to Login Page <br />
Login as user:user<br />
Intercept the request while logging in<br />
Decode the jwt tokens using base64 decoder<br />
Tamper the tokens RS256 > HS256 and user > admin<br />
Encrypt with Public Key using HS256 algorithm<br />
Public Key can be obtained from Page Source<br />
Now replace your new jwt token with the old one and forward your request<br />
you will get the user name and password of admin<br />
Now login using the exposed credentials<br />
You will find the flag in the cookies<br />
### Instructions to Deployment Team
sudo snap install ruby --classic<br />
bundle install (might take some time)<br /> 
rails db:migrate(If not working, set yarn integrity check to false)<br />
rails s -b (ip) -p (port)

### FLAG
FLAG FORMAT: IEEECTF{}<br />
FLAG: IEECTF{JWTs_AR3_AW3S0M3_WITH_T4STY_C00KI3$}
