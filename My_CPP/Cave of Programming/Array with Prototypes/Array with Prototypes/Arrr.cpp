#include <iostream>
#include "arrr.h"
using namespace std;

int arr[100];
void array_in(int n)
{
    cout<<"Enter "<<n<<" element array."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Array["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<endl;
}

void array_print(int n)
{
    cout<<"Array output"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Array["<<i<<"]=";
        cout<<arr[i]<<endl;
    }
}
