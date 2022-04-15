#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x=1;
    int *y=&x;
    //int *y;
    //y=&x;

    *y=12;// without other variable pointer nothing.
    cout<<"Int value: "<<x<<endl;
    cout<<"Int Address: "<<&x<<endl;

    cout<<"pointer value: "<<*y<<endl;
    cout<<"pointer Address: "<<y<<endl;
    return  0;
}
