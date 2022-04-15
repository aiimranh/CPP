#include <iostream>
using namespace std;

class buckyclass{
    public:
        //can be access from main function.
        void print()
        {
            cout<<"Just Checking"<<endl;
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
