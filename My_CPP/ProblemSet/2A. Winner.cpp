#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z,maxi,position,a[100];
    bool b=0;
    string xx,yy,name[100];
    cin>>x;
    y=x;
    z=x;
    for(int i=0; i<x; i++)
    {
        cin>>name[i];
        cin>>a[i];
    }
    maxi=a[0];
    for(int i=0; i<y; i++)
    {
        if(maxi<=a[i])
        {
            maxi=a[i];
            position=i;
        }
    }
    for(int i=0; i<z-1; i++)
    {
        xx=name[i];
        yy=name[i+1];
        b = strcmp(xx,yy);
        if (b==0)
        {
            cout<<"True";
        }
    }
    /*for(int i=0;i<z;i++)
    {

    }*/
    cout<<name[position];
    return 0;
}
