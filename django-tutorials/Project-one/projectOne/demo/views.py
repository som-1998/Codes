from django.shortcuts import render
from django.http import HttpResponse


# Create your views here.

def original_port(request):
    return HttpResponse('Port 8000')

def go_home(request):
    name = 'Somnath'
    return HttpResponse(f"Hello {name}")