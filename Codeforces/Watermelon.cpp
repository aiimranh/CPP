//
// Created by AIIH on 2/14/2021.
//
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int w;
    do {
        cin >> w;
    }while(!(w<=100 && w>=1));
    if((w-2)%2==0)
    {
        if(w==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
