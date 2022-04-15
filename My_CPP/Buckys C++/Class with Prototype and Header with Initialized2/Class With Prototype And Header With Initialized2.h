#ifndef CCC_H_INCLUDED
#define CCC_H_INCLUDED
#include <iostream>
using namespace std;

class buckyclass{
    public:
        buckyclass(string name):name(name){};
        //if defination gives here we can not defination in ccc.cpp file.
        string getname();

    protected:

    private:
        string name;//can not be access out of this class
        //so we need public function to set and get value.
};

#endif // CCC_H_INCLUDED
