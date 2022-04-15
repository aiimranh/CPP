#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texts[]={"one","two","three"};
    string *ptexts=texts;
    for(int i=0;i<sizeof(texts)/sizeof(string);i++)
    {
        //cout<<texts[i]<<" "<<flush;
        cout<<ptexts[i]<<" "<<flush;
    }
    return 0;
}
