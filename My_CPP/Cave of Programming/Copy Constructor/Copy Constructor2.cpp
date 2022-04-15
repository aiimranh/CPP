#include <iostream>
#include <string>
using namespace std;

class buckyclass
{
public:
    buckyclass(){ cout<<"Constructor created."<<endl; }

    buckyclass(const buckyclass& other):name(other.name),age(other.age)
    { cout<<"Copy constructor is created."<<endl; }

    void setname(string name, int age)
    { this->name=name; this->age=age; }

    string print() const
    { cout<<"Name is :"<<name<<endl; cout<<"Age is :"<<age<<endl; }

private:
    string name;
    int age;
};
int main()
{
    buckyclass bo;
    bo.setname("Imran",22);
    bo.print();

    buckyclass bo2=bo;
    bo2.print();

    buckyclass bo3(bo2);
    bo3.print();

    return 0;
}

