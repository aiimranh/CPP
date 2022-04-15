#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int siz=sizeof(arr)/sizeof(int);
    int flag=0;
    for(int i=0;i<siz-1;i++)
    {
        cout<<"i= "<<i<<endl;
        flag=0;
        for(int j=0;j<siz-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }

    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}

