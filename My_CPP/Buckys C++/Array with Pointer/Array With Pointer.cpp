#include <iostream>
#include <cmath>
#include <string>
#include "ccc.h"

using namespace std;

int arr[100];
int *p=arr;

void array_input(int n)
{
    cout<<"Array inputting..."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*p;
        p++;
    }
}

p=arr;

void array_print(int n)
{
    cout<<"Array printing..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*p;
        p++;
    }
}
