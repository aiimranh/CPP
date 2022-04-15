//loop through an array, stopping compare two array.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int texts[100];

    cout<<"How many element want to add:"<<flush;
    cin>>n;

    int *pStart=&texts[0];/*int *pStart; pStart=&texts[0];*/
    int *pEnd=&texts[n-1];

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

