#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head, *newnode, *newnode2,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->link=NULL;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=4;
    newnode->link=NULL;
    head->link=newnode;

    newnode2=(struct node*)malloc(sizeof(struct node));
    newnode2->data=5;
    newnode2->link=NULL;
    newnode->link=newnode2;

    //cout<<"Inserting the new node in the begging."<<endl;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the the data"<<endl;
    cin>>newnode->data;
    newnode->link=head;
    head=newnode;

    cout<<"Printing the Linked Lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    return 0;
}



