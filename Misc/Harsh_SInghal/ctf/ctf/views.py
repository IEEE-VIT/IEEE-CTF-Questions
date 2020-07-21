from django.shortcuts import render
from django.shortcuts import render,redirect
from django.contrib.auth.models import User
from django.contrib import auth
from django.contrib.auth.forms import PasswordChangeForm
from django.contrib.auth import update_session_auth_hash



def ctf(request):
    return render(request,'black.html')


def login(request):
    if request.method=='POST':
        user=auth.authenticate(username=request.POST['username'],password=request.POST['password1'])
        if user is not None:
            auth.login(request,user)
            return redirect('brute')
        else:
            return render(request,'black.html',{'error':'only admin has access to it'})
    else:
        return render(request,'black.html')
def zips(request):
    return render(request,'zips.html') 

def robot(request):
    return render(request,'robot.html') 