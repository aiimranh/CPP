#include <iostream>
#include <string>

using namespace std;

int main()
{
    int j=0,n=1,m=0;
    char texts[]="hello";
    char *ptexts=texts;
    //taking only vowel.
    for (unsigned int i=0;i<sizeof(texts)-1;i++)
    {
        n=ptexts[i]=='a'||ptexts[i]=='e'||ptexts[i]=='i'||ptexts[i]=='o'||ptexts[i]=='u';
        if(n==1)
        {
            ptexts[j]=ptexts[i];
            j++;
            n++;
        }

    }
    /*//deleting other letter from string.
    for(unsigned int i=n;i<sizeof(texts)-1;i++)
    {
        ptexts[i]=0;
    }
    ptexts=texts;
    cout<<sizeof(texts)<<endl;
    //printing string.
    for (unsigned int i=0;i<sizeof(texts)-1;i++)
    {
        cout<<ptexts[i]<<" "<<flush;
    }*/
    ptexts=texts;
    for (unsigned int i=0;i<n;i++)
    {
        cout<<ptexts[i]<<flush;
    }
    return 0;
}

