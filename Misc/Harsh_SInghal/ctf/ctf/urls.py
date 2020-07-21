from django.urls import path,include
from .import views


urlpatterns = [
    path('black.htm', views.ctf,name='black'),
    path('accounts/', include('django.contrib.auth.urls')),
    path('dontbesobrutal',views.zips, name="brute"),
    path('dontbesobrutal/robot/',views.robot, name="robot"),
    path('dontbesobrutal/robot.txt',views.robot, name="robots"),

]