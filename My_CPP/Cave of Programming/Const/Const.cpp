#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int x=1;
    //x=2;//error with this: const int x=1;
    cout<<"x:"<<x<<endl;
    return 0;
}
