//
// Created by AIIH on 2/14/2021.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n-->=0)
    {
        string name;
        cin>>name;
        if((name.size())>10){
            cout<<name[0]<<name.size()-2<<name[name.size()-1]<<endl;
        }
        else cout<<name<<endl;
    }

    return 0;
}