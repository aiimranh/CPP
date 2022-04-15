//
// Created by AIIH on 2/15/2021.
//

#include <iostream>
//#include <cmath>
//#include <cstring>
#include <string>
using namespace std;

int main()
{
    string s1="3+2+1";
    char arr[100],j=0;
    //cin>>s1;
    for(int i=0;i<5;i++)
        {
        if(s1[i]=='+') continue;
        else
            {
            arr[j] = s1[i];
            cout << s1[i] << endl;
            j++;
            }
        }
    for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<endl;
        }

    return 0;
}