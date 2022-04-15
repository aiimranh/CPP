#include <iostream>
#include <string>
using namespace std;


class xxx
{
private:
    string name;
    string getname()
    {
        return name;
    }
public:
    xxx(string name):name(name){}
    void speak()
    {
        cout<<"Name is: "<<getname()<<endl;
    }
};


int main()
{
    xxx xo("xxx");
    xo.speak();

    return 0;
}


