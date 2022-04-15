#include <iostream>
#include <string>

using namespace std;

class buckyclass{
    public:
        void setname(string x)
        {
            name=x;
        }
        string getname()
        {
            return name;
        }

    private:
        string name;//can not be access out of this class
        //so we need public function to set and get value.

    protected:

};

int main()
{
    string x;
    buckyclass bo;
    cout<<"Enter Name: ";
    cin>>x;
    bo.setname(x);
    cout<<bo.getname()<<endl;

    return 0;
}

