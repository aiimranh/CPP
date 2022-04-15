#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string name = "Imran",info;
    int age =22;
    stringstream ss;
    ss<<"Name: "<<name<<"; age: "<<age;
    info=ss.str();
    cout<<info;
    return 0;
}
