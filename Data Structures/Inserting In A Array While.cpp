#include <bits/stdc++.h>
using namespace std;
int main()
{
    int siz=10, arr[siz]={1,2,3,4,5,6,7,8,9,0};
    int i=0;
    while(i<siz)
    {
        cout<<arr[i]<<endl;
        i++;
    }

    i=siz;
    while(i>=5)
    {
        arr[i]=arr[i-1];
        i--;
    }
    cout<<endl<<"Break"<<endl<<endl;
    arr[5]=55;
    siz=siz+1;

    i=0;
    while(i<siz)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}

