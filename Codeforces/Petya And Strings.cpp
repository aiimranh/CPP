//
// Created by AIIH on 2/15/2021.
//
#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string s1="AAAAAnb";
    string s2="DDd";
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if(s1==s2) cout<<"0";
    else if(s1>s2) cout<<"1";
    else cout<<"-1";
    return 0;
}