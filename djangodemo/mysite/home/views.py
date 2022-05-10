from multiprocessing import context
import re
from django.shortcuts import render, HttpResponse

# Create your views here.
def index(request):
    #return HttpResponse('This is Dr. Naveen Kumar Bharti Home page.')
    context = {
        'name':'Dr. Naveen Kumar Bharti',
        'designation':'Assistant Professor',
        'organization':'KLEF Deemed to be Univesity'
    }
    return render(request, 'index.html', context)

def about(request):
    return HttpResponse('This is Dr. Naveen Kumar Bharti about page.')


def services(request):
    return HttpResponse('This is Dr. Naveen Kumar Bharti services page.')

def contact(request):
    return HttpResponse('This is Dr. Naveen Kumar Bharti contact page.')

def page1(request):
    #return HttpResponse('This is Dr. Naveen Kumar Bharti Home page.')
    context = {
        'name':'Dr. Naveen Kumar Bharti',
        'designation':'Assistant Professor',
        'organization':'KLEF Deemed to be Univesity'
    }
    return render(request, 'page1.html')
