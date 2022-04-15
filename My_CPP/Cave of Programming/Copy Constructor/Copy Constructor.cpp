#include <iostream>
#include <string>
using namespace std;

class buckyclass
{
public:
    buckyclass(){ cout<<"Constructor created."<<endl; }
    buckyclass(const buckyclass& other):name(other.name) { cout<<"Copy constructor is created."<<endl; }
    //buckyclass(const buckyclass& other){ name=other.name; cout<<"Copy constructor is created."<<endl; }
    /*buckyclass(const buckyclass& other):name(other.name
    {other.print();//we cannot any method that is not const.
    cout<<"Copy constructor is created."<<endl;
    }*/
    void setname(string name){ this->name=name; }
    string print() const { cout<<"Name is :"<<name<<endl; }

private:
    string name;
};

int main()
{
    buckyclass bo;
    bo.setname("Imran");
    bo.print();

    buckyclass bo2=bo;
    bo2.print();

    buckyclass bo3(bo2);
    bo3.print();
    return 0;
}
