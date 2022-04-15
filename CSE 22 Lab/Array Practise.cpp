//
// Created by AIIH on 6/21/2021.
//

#include <bits/stdc++.h>
using namespace std;

int arraycreate(int arr[])
{
    int siz;
    cout<<"How many element do you input?"<<endl;
    cin>>siz;
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    return siz;
}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int deletearraybydata(int arr[],int n)
{
    int data, position=-1;
    cout<<"what data, you wanted to delete"<<endl;
    cin>>data;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            position = i;
            break;
        }
    }
    if(position == -1) cout<<"element is not found"<<endl;
    for(int i=position;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}
int main()
{
    int arr[100], size, opt;
    size = arraycreate(arr);
    printarray(arr,size);
    cout<<"option/n"
        <<"1 for deleting/n"<<"2 for inserting/n"<<"0 for break"<<endl;
    cin>>opt;
    if(opt == 1)
    {
        size = deletearraybydata(arr,size);
    }
    do {

    }while(opt!=0);

    printarray(arr,size);
    return 0;
}