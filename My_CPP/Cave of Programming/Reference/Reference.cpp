#include <iostream>
#include <string>
using namespace std;

double ss(double &xx)//receive reference.
{
    return xx=100;
}

int main()
{
    int x=1;
    int &y=x;
    double z=12;
    ss(z);//send value.
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"Z:"<<z<<endl;
    return 0;
}
