//
// Created by AIIH on 2/15/2021.
//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    int b=0,a=0,sum=0,c=0;
    cin>>n>>k;
    c=n-k;
    while(k--)
    {
        cin>>a;
        if(a>0) sum++;
        b=a;
    }
    while(c--)
    {
        cin>>a;
        if(b>0 && b==a)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
