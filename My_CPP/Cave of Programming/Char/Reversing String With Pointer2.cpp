//same array.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char save,texts[]="imran";
    char *ptexts=texts;

    for (int i=sizeof(texts)-2;i>=0;i--)//size 6 because,there is an null char.
    {
        cout<<ptexts[i];
    }
    cout<<texts;
    return 0;
}
