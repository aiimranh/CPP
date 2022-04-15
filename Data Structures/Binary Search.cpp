#include <bits/stdc++.h>
using namespace std;

print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int bin_search(int arr[],int n,int sear)
{
    int start=0,ends=n-1,mid;
    while(start<=ends)
    {
        mid = int((start+ends)/2);
        if(arr[mid]==sear)
        {
            return mid;
        }
        else if(arr[mid]>sear)
        {
            ends=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int condition(int z)
{
    if(z==-1)
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Index is = "<<z<<endl;
    }
}

int main()
{
    int arr[]= {0,1,2,3,4,5,6,7,8,9},sear;
    int siz=sizeof(arr)/sizeof(int);

    print(arr,siz);
    cout<<"Input the value: "<<endl;
    cin>>sear;

    int z=bin_search(arr,siz,sear);
    condition(z);
    return 0;
}


