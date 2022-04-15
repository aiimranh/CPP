//loop through an array by incrementing a pointer.
#include <iostream>
#include <string>
using namespace std;

int main()
 {
     string texts[100];
     int n;
     string *ptexts=texts;//string *parr;parr=&arr[0];
     cout<<"How many element: "<<flush;
     cin>>n;

     cout<<"Inputting..."<<endl;
     for(int i=0;i<n;i++,ptexts++)
     {
         cin>>*ptexts;

     }

     ptexts=texts;//ptexts=&texts[0];
     cout<<"Printing..."<<endl;
     for(int i=0;i<n;i++,ptexts++)
     {
         cout<<*ptexts<<" "<<flush;
     }
     return 0;
 }

