#include <iostream>
#include <string>
using namespace std;

void show1(const int n, string texts[])
{
    for(int i=0;i<n;i++)
    {
        cout<<texts[i]<<" "<<flush;
    }
    cout<<endl;
}

void show2(const int n, string *texts)
{
    for(int i=0;i<n;i++)
    {
        cout<<texts[i]<<" "<<flush;
    }
    cout<<endl;
}

void show3(string (&texts)[3])
{
    for(int i=0;i<sizeof(texts)/sizeof(string);i++)
    {
        cout<<texts[i]<<" "<<flush;
    }
}

char *getMemorry()
{
    char *pMem=new char[100];
    return 0;
}
void freeMemory(char *pMem)
{
    delete [] pMem;
}

int main()
{
    string texts[]={"one","two","three"};
    show1(sizeof(texts)/sizeof(string),texts);
    show2(sizeof(texts)/sizeof(string),texts);
    show3(texts);

    char *Mem=getMemorry();
    freeMemory(Mem);

    return 0;
}
