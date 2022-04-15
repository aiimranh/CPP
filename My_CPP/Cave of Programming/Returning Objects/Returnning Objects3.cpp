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
        ageprint();
        return name;
    }
    int ageprint() const
    {
        cout<<"age is :"<<age<<endl;
        return age;
    }

private:
    string name;
    int age;
};

buckyclass *createbuckyclass()
{
    buckyclass *pBo=new buckyclass();
    pBo->setname("imran",22);
    return pBo;
}

int main()
{
    buckyclass *bo= createbuckyclass();
    bo->print();
    delete bo;

    return 0;
}

