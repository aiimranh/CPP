//
// Created by AIIH on 2/15/2021.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n,x=0;
    string name;
    cin>>n;
    while(n--)
    {
        cin>>name;
        if(name=="++X")
        {
            ++x;
        }
        else if(name=="--X")
        {
            --x;
        }
        else if(name=="X++")
        {
            x++;
        }
        else x--;
    }
    cout<<x;
}