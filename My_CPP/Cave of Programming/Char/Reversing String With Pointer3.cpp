//same array.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int j;
    char save[10],texts[]="imran";

    for (int i=sizeof(texts)-2,j=0;i>=0;i--,j++)//size 6 ;because,there is an null char
    {
        save[j]=texts[i];
    }
    cout<<save;
    return 0;
}

