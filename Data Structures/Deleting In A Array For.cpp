#include <bits/stdc++.h>
using namespace std;
int main()
{
    int siz=10, arr[siz]={1,2,3,4,5,6,7,8,9,0};

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=5;i<siz;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"Break"<<endl;
    siz=siz-1;

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

