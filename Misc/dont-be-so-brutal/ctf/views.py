from django.shortcuts import render,redirect, HttpResponse
from django.http import JsonResponse
from django.contrib.auth.models import User
from django.shortcuts import render,redirect, HttpResponse
from django.contrib import auth
from django.contrib.auth.decorators import login_required
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .forms import LoginForm


def user_login(request):
   if request.method == 'POST':
       form = LoginForm(request.POST)
       if form.is_valid():
           cd = form.cleaned_data
           user = auth.authenticate(request,
                               username=cd['username'],
                               password=cd['password'])
           if user is not None:
               return JsonResponse({"TOKEN": "j3231nejfnwefnefwkenf"})
           else:
               return HttpResponse('Invalid login')
   else:
       form = LoginForm()
   return render(request, 'login.html', {'form': form})


@api_view(["GET"])
def dontbesobrutal(request):
    header = request.META.get('HTTP_TOKEN')
    if header != 'j3231nejfnwefnefwkenf':
        return Response({"brutality": "high"})
    else:
        return Response({"Mr.Robot": "I know your flag"})

@api_view(["GET"])
def download(request):
    header = request.META.get('HTTP_TOKEN')
    if header != 'j3231nejfnwefnefwkenf':
        return Response({"brutality": "high"})
    response = HttpResponse(open("esrever.zip", 'rb').read())
    response['Content-Type'] = 'application/x-zip-compressed'
    response['Content-Disposition'] = 'attachment; filename=esrever.zip'
    return response

# 
# def login(request):
    # if request.method=='POST':
        # user=auth.authenticate(username=request.POST['username'],password=request.POST['password'])
        # if user is not None:
            # auth.login(request,user)
            # return redirect('brute')
        # else:
            # return render(request,'login.html',{'error':'username or password is inccorrect'})
    # else:
        # return render(request,'./login.html')
    # return render(request,'login.html')
# 
# @login_required(login_url='login')
# def zips(request):
    # return render(request,'zips.html') 
# 
# @login_required(login_url='login')
# def robot(request):
    # return render(request,'robot.html') 
# 
# @login_required(login_url='login')
# def download(request):
    # response = HttpResponse(open("esrever.zip", 'rb').read())
    # response['Content-Type'] = 'application/x-zip-compressed'
    # response['Content-Disposition'] = 'attachment; filename=esrever.zip'
    # return response
# 
# 
# @login_required(login_url='login')
# def hint(request):
    # return render(request,'hint.html')     
