//loop through an array, stopping compare two array.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string texts[100];

    cout<<"How many element want to add:"<<flush;
    cin>>n;

    string *pStart=&texts[0];/*string *pStart; pStart=&texts[0];*/
    string *pEnd=&texts[n-1];

    cout<<"Inputting..."<<endl;
    while(true)
    {
        cin>>*pStart;
        if(pStart==pEnd)
        {
            break;
        }
        pStart++;
    }

    pStart=&texts[0];
    cout<<"Printing..."<<endl;
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

