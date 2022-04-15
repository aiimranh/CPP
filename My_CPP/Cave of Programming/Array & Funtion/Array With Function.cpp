#include <iostream>
using namespace std;

int arr[100]; //Global Array Function.
//Without Global function this array function does not work.

void array_in(int n);
void array_print(int n);

int main()
{
    int num;
    cout<<"Enter How many Element You Need in Array ->"<<endl;
    cin>>num;
    array_in(num);
    array_print(num);

    return 0;
}

void array_in(int n)
{
    cout<<"Enter "<<n<<" element array."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Array["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<endl;
}

void array_print(int n)
{
    cout<<"Array output"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Array["<<i<<"]=";
        cout<<arr[i]<<endl;
    }
}
