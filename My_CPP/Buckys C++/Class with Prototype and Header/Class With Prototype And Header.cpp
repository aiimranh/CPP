#include <iostream>
#include <string>
#include "ccc.h"

using namespace std;

buckyclass::buckyclass()
        {
            cout<<"When you initialized class object i will print."<<endl;
        }
buckyclass::buckyclass(string x)
        {
            //constructor support function overloading.
            cout<<"when you initialized class object with string I will print."<<endl;
        }
void buckyclass::setname(string x)
        {
            name=x;
        }
string buckyclass::getname()
        {
            return name;
        }
