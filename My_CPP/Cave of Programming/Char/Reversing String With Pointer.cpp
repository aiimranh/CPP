#include <iostream>
#include <string>
using namespace std;
int main()
{
    char texts[]="imran";

    char *pStart=&texts[0];
    char *pEnd=&texts[sizeof(texts)-2];//size 6 because,there is an null char.

    while(pStart<pEnd)
    {
        char save=*pStart;
        *pStart=*pEnd;
        *pEnd=save;

        pStart++;
        pEnd--;
    }
    cout<<texts;
    return 0;
}
