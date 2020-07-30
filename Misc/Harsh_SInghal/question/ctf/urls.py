from django.urls import path,include
from .import views


urlpatterns = [
    path('login/', views.login),
    path('login/dontbesobrutal/',views.zips, name="brute"),
    path('login/dontbesobrutal/robot/',views.robot, name="robot"),
    path('login/dontbesobrutal/robot.txt',views.hint, name="robot"),
    path('login/dontbesobrutal/robot/download',views.download, name="robot"),

]