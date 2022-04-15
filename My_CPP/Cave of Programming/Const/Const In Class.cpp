#include <iostream>
#include <string>
using namespace std;

class buckyclass
{
public:
    void setname(string name)
    {
        this->name=name;
    }
    const string getname()
    {
        return name;
    }
    string getname(int x)
    {
        return "bbb";
    }

private:
    string name;
};

int main()
{
    buckyclass bo;
    buckyclass vo;
    bo.setname("Imran");
    vo.setname("hello");
    cout<<bo.getname()<<endl;
    cout<<vo.getname()<<endl;
    return 0;
}
