#include <bits/stdc++.h>
using namespace std;
int main()
{
    int siz=10, arr[siz]={1,2,3,4,5,6,7,8,9,0};
    int pos=-1, x;
    cin>>x;

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=0;i<siz;i++)
    {
        if(arr[i]==x)
        {
            pos=i;
            cout<<"Yes, I found!"<<endl;
            cout<<"Index is "<<pos<<endl;
            break;
        }
    }
    cout<<endl;
    if(pos==-1)
    {
        arr[siz]=x;
        siz++;
    }

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}


