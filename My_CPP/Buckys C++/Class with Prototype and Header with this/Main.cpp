#include <iostream>
#include <string>
#include "ccc.h"

using namespace std;

int main()
{
    string x;
    buckyclass bo;
    buckyclass co;
    buckyclass vo("Imran");
    cout<<"Enter Name: ";
    cin>>x;
    bo.setname(x);
    cout<<bo.getname()<<endl;

    return 0;
}
