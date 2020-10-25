from django.shortcuts import render,redirect
from django.contrib.auth.models import User
from django.contrib import auth



def login(request):
    if request.method=='POST':
        user=auth.authenticate(username=request.POST['username'],password=request.POST['password'])
        if user is not None:
            auth.login(request,user)
            return redirect('brute')
        else:
            return render(request,'login.html',{'error':'username or password is inccorrect'})
    else:
        return render(request,'./login.html')
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