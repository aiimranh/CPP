#include <iostream>
using namespace std;

class text
{
public:
    static int n;//static associate with class.
};
int text::n=7;
int main()
{
    cout<<text::n<<endl;
    return 0;
}
