
from django.contrib import admin
from django.urls import path,include
from ibm import views
from django.conf.urls.static import static
from django.conf import settings
from django.contrib.staticfiles.urls import staticfiles_urlpatterns
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.home, name="home"),
    path('ctf/',include('ctf.urls')),

]
