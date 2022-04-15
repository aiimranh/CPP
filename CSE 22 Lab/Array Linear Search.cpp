#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n)
{
    int data,position = -1;
    cout<<"data"<<endl;
    cin>>data;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == data)
        {
            position = i;
        }
    }
    return position;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int rec = linearsearch(arr,size);

    if(rec == -1)
    {
        cout<<"not found."<<endl;
    }
    else
    {
        cout<<"position is "<<rec<<endl;
    }

    return 0;
}