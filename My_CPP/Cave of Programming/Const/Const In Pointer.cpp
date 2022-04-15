#include <iostream>
#include <string>

using namespace std;
int main()
{
    //int x=1;
    const int x=1;
    int y=2;

    //const int *p=&x; //this means pointer can not take value directly
    //using this pointer.this pointer can point other pointer.
    //pointer value can be changed using pointed variable.

    //int *const p=&x; //this means pointer where pointed that is constant.
    //this means pointer can not point another variable.
    //pointer value can be changed using pointed variable or pointer.

    const int *p=&x;
    //x=9;
    //p=&y; //error with this:int * const *p=&x;
    //*p=3; //error with this: const int *p=&x;

    cout<<"x:"<<x<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"y:"<<y<<endl;
    return 0;
}

