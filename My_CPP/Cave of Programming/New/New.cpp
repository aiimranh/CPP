#include <iostream>
#include <string>
using namespace std;

class buckyclass
{
public:
    buckyclass()
    {
        cout<<"Constructor created."<<endl;
    }

    buckyclass(const buckyclass& other):name(other.name),age(other.age)
    {
        cout<<"Copy constructor is created."<<endl;
    }
    ~buckyclass()
    {
        cout<<"destructor called."<<endl;
    }
    void setname(string name, int age)
    {
        this->name=name;
        this->age=age;
    }

    string print() const
    {
        cout<<"Name is :"<<name<<endl;
        cout<<"Age is :"<<age<<endl;
    }

private:
    string name;
    int age;
};
int main()
{
    buckyclass *bo= new buckyclass();
    //buckyclass *bo= new buckyclass;
    //buckyclass *bo= new buckyclass(arg);
    bo->setname("Imran",22);
    //(*bo).setname("Imran",22);
    bo->print();
    //(*bo).print();

    delete bo;
    return 0;
}


