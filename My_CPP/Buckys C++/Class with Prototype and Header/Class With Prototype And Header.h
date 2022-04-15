#ifndef CCC_H_INCLUDED
#define CCC_H_INCLUDED
using namespace std;

class buckyclass{
    public:
        buckyclass();
        buckyclass(string x);
        void setname(string x);
        string getname();

    protected:

    private:
        std::string name;//can not be access out of this class
        //so we need public function to set and get value.
};

#endif // CCC_H_INCLUDED
