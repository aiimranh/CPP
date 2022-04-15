#include <iostream>
using namespace std;

class text
{
private:
    static int n;//static associate with class.
public:
    static void info()//static method can access static variable;
    {
        cout<<n<<endl;
    }
};
int text::n=7;
int main()
{
    text::info();
    return 0;
}

