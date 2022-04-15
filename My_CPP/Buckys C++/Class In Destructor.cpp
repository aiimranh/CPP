#include <iostream>
using namespace std;

class buckyclass{
    public:
        //can be access from main function.
        void print()
        {
            cout<<"Just Checking"<<endl;
        }
        buckyclass()
        {
            cout<<"When you initialized class object, i will print."<<endl;
        }
        ~buckyclass()
        {
            cout<<"When class object go out of scope, i will print."<<endl;
        }
    private:
    protected:

};

int main()
{
    buckyclass bo;
    bo.print();

    return 0;
}
