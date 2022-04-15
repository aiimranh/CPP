#include <iostream>
#include "arrr.h"//this header only contain declaration.
//if only header is added then defination should be in main cpp.
//or if other cpp file added defination is include into it.
using namespace std;

//int arr[100]; //Global Array Function.
//Without Global function this array function does not work.

int main()
{
    int num;
    cout<<"Enter How many Element You Need in Array ->"<<endl;
    cin>>num;
    array_in(num);
    array_print(num);

    return 0;
}





