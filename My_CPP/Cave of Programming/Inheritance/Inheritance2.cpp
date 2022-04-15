#include <iostream>
#include <string>
using namespace std;

namespace na
{
    class animal
    {
    public:
        void speak()
        {
            cout<<"Sssss!"<<endl;
        }
    };


class cat: public animal
{
public:
    void jump()
    {
        cout<<"Jumping!"<<endl;
    }
};

class dog:public cat
{
public:
    void attack()
    {
        cout<<"Attacking!"<<endl;
    }
};
}

int main()
{
    na::animal a;
    a.speak();
    cout<<endl;

    na::cat pussy;
    pussy.speak();
    pussy.jump();
    cout<<endl;

    na::dog spike;
    spike.speak();
    spike.jump();
    spike.attack();

    return 0;
}

