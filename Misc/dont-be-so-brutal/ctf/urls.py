from django.urls import path,include
from .import views
from django.contrib.auth import views as auth_views

urlpatterns = [
    path('login/', auth_views.LoginView.as_view(template_name='login.html'), name='login'),
    path('login/dontbesobrutal/',views.zips, name="brute"),
    path('login/dontbesobrutal/robot/',views.robot, name="robot"),
    path('login/dontbesobrutal/robot.txt',views.hint, name="robot"),
    path('login/dontbesobrutal/robot/download',views.download, name="robot"),

]
