#include <iostream>
#include <string>
#include "ccc.h"

using namespace std;

buckyclass::buckyclass(string name):name(name)
        {
            cout<<"when you initialized class object with string I will print."<<endl;
        }
/*void buckyclass::setname(string name)
        {
            this->name=name;
        }*/
string buckyclass::getname()
        {
            return name;
        }
