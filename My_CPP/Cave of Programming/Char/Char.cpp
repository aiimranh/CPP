#include <iostream>
#include <string>
using namespace std;
int main()
{
    //1...
    /*char texts[]={'a','b','c','d'};//here size of texts is 4.
    cout<<sizeof(texts)<<endl;
    for(int i=0;i<sizeof(texts);i++)
    {
        cout<<texts[i]<<flush;
    }*/

    //2...
    char texts[]="abcd";
    cout<<texts;
    cout<<sizeof(texts);//but here size of char is 5.


    return 0;
}
