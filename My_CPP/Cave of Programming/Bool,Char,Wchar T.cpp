#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    bool var=true;
    cout<<var<<endl;
    bool var4=false;
    cout<<var4<<endl;

    char var1 = 55;//input int.
    cout<<var1<<endl;//output char
    cout<<(int)var1<<endl;//output int
    char var2 ='7';//input char
    cout<<var2<<endl;//output char
    cout<<(int)var2<<endl;//output int

    wchar_t var3 = 'i';//input char.
    cout<<var3<<endl;//output int
    cout<<(char)var3<<endl;//output char
    wchar_t var5 =105;//never input int value
    cout<<var5<<endl;//output int
    cout<<(char)var5<<endl;//output char
    return 0;
}
