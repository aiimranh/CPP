//loop through an array by incrementing a pointer.
#include <iostream>
#include <string>
using namespace std;

int main()
 {
     int arr[]={1,2,3,4,5,6,7,0};
     int *parr=arr;//int *parr;parr=&arr[0];

     for(int i=0;i<sizeof(arr)/sizeof(int);i++,parr++)
     {
         cout<<*parr<<" "<<flush;
         //parr++;
     }
     return 0;
 }
