from django.urls import path
from . import views 

urlpatterns = [
    path('home/',views.go_home),
    path('', views.original_port)
]