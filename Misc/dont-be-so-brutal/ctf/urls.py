from django.urls import path,include
from .import views
from django.contrib.auth import views as auth_views

urlpatterns = [
    path('login/', views.user_login),
    path('dontbesobrutal/',views.dontbesobrutal, name="brute"),
    path('dontbesobrutal/robot',views.download, name="robot"),
]
