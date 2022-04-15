#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head,*newst,*temp;
    head=0;
    int choice=1,count=0;
    while(choice==1)
    {
        newst=(struct node*)malloc(sizeof(struct node));

        cout<<"Enter the value"<<endl;
        cin>>newst->data;
        newst->link=0;

        if(head==NULL)
            head=temp=newst;
        else
        {
            temp->link=newst;
            temp=newst;
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>choice;
    }

    cout<<"displaying the linked lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
        count++;
    }
    cout<<"Total number of node: "<<count<<endl;
    return 0;
}
