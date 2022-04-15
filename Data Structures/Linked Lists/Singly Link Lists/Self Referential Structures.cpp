//https://www.youtube.com/watch?v=otu7gJVcwDw&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=30

#include <bits/stdc++.h>
using namespace std;

/*struct self{
    int p;
    struct self *ptr;
};
*/
struct code
{
    int i;
    char c;
    struct code *ptr;
};

int main()
{
    struct code var1;
    var1.i=60;
    var1.c='A';
    var1.ptr=NULL;

    struct code var2;
    var2.i=78;
    var2.c='B';
    var2.ptr=NULL;

    var1.ptr=&var2;

    cout<<var1.ptr<<endl;
    return 0;
}
