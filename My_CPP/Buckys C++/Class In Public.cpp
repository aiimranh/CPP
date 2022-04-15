#include <iostream>
#include <string>

using namespace std;

class buckyclass{
    public:
        //can be access from main function.
        void print()
        {
            cout<<"Just Checking"<<endl;
        }
        string name;
    private:
    protected:

};

int main()
{
    buckyclass bo;
    bo.print();
    bo.name="Dude";
    cout<<bo.name<<endl;

    return 0;
}


