//loop through an array, stopping compare two array.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texts[]={"one","two","three","four"};

    string *pStart=&texts[0];
    /*string *pStart;
    pStart=&texts[0];*/
    string *pEnd=&texts[sizeof(texts)/sizeof(string)-1];

    while(true)
    {
        cout<<*pStart<<" "<<flush;
        if(pStart==pEnd)
        {
            break;
        }
        pStart++;
    }

    return 0;
}
