#include <iostream>
using namespace std;

int A_Delete(int n,int A[]) {
    cout << "Deletion is Running." << endl;
    int i, k;
    cout << "What index do you want delete?" << endl;
    cin >> k;
    if (k >= 0 && k < n) //Index valid checker!.
    {
        for (i = k; i < n - 1; i++) {
            A[i] = A[i + 1];
        }
        n = n - 1;
        cout << "Deletion Done.\n" << endl;
    }
    else cout<<"\nWarn: Array Can't be update due to invalid Index."<<endl;
    return n;
}
int A_Insert(int n,int A[])
{
    int i,k,data;
    cout<<"Where do you want to insert?\nIndex start 0:"<<endl;
    cin>>k;
    if(k>=0 && k<=n) //Index valid checker!.
    {
        cout<<"What element do you insert?"<<endl;
        cin>>data;

        for( i=n-1;i>=k;i--)
        {
            A[i+1]=A[i];
        }
        A[k]=data;
        n=n+1;

        cout<<"Insertion Done.\n"<<endl;
    }
    else cout<<"\nWarn: Array Can't be update due to invalid Index."<<endl;
    return n;
}
void A_Print(int n,int A[])
{
    cout<<"Traversing is Running"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<"\nTraversing Done.\n"<<endl;
}
int A_Create(int A[])
{
    //cout<<"Now Array will be created."<<endl;
    int n;
    cout<<"How many Element do you want to create an array?"<<endl;
    cin>>n;
    cout<<"Input the element."<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Array has been created.\n"<<endl;
    return n;
}
int main() {
    int size,opt;
    int A[100];

    size = A_Create(A);
    A_Print(size,A);

    cout<<"Choose operation below this.\nTo traverse press 1\nTo insert press 2\n"
          "To delete press 3\nTo exit press 0"<<endl;

    do{
        cout<<"->";
        cin>>opt;
        if(opt==1) {
            A_Print(size,A);
        }
        if(opt==2)
        {
            size=A_Insert(size,A);
            A_Print(size,A);
        }
        if(opt==3)
        {
            size=A_Delete(size,A);
            A_Print(size,A);
        }
    }while(opt!=0);

    return 0;
}
