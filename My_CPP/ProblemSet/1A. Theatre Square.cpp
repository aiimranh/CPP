#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,m,a,x,y;
    cin>>n>>m>>a;
    if (n%a==0)
    {
        x=n/a;
    }
    else
    {
        x=n/a+1;
    }
    if (m%a==0)
    {
        y=m/a;
    }
    else
    {
        y=m/a+1;
    }
    cout<<x*y<<endl;
    //cout<<(ceil(n/(float)a))*(ceil(m/(float)a))<<endl;
    return 0;
}
