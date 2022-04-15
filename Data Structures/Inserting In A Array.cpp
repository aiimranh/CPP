#include <bits/stdc++.h>
using namespace std;
int main()
{
    int siz=10, arr[siz]={1,2,3,4,5,6,7,8,9,0};

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=siz;i>=5;i--)
    {
        arr[i]=arr[i-1];
    }
    cout<<"Break"<<endl;
    arr[5]=55;
    siz=siz+1;

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
