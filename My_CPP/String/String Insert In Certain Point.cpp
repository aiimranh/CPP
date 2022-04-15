//string text="Good Imran";
//string text="Good Morning, Imran!";
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char text[]="Good Imran";
    char *ptext=text;
    int s,e,n;
    int x=sizeof(text);
    cout<<"Enter start & end point in original array index:"<<endl;
    cin>>s>>e;
    n=e-s;

    for(int i=s;i<x;i++)
    {
        //if(i+n+1==x)break;
        ptext[i]=ptext[i+n];
    }
    cout<<sizeof(text);
    for(int i=0;i<sizeof(text-1);i++)
    {
        cout<<text[i];
    }
    return 0;
}
