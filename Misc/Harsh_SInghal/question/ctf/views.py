from django.shortcuts import render , HttpResponse
from django.shortcuts import render,redirect
from django.contrib.auth.models import User
from django.contrib import auth
from django.contrib.auth.forms import PasswordChangeForm
from django.contrib.auth import update_session_auth_hash
from django.contrib.auth.decorators import login_required

def login(request):
    return render(request,'./login.html')
def zips(request):
    return render(request,'zips.html') 

    
def robot(request):
    return render(request,'robot.html') 

def download(request):
    response = HttpResponse(open("esrever.zip", 'rb').read())
    response['Content-Type'] = 'application/x-zip-compressed'
    response['Content-Disposition'] = 'attachment; filename=esrever.zip'
    return response

def hint(request):
    return render(request,'hint.html')     