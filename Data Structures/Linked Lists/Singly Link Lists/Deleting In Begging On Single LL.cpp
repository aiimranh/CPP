#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    //cout<<"Creating node."<<endl;
    struct node *head, *newnode, *newnode2, *temp;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=2;
    newnode->link=NULL;
    head->link=newnode;

    newnode2=(struct node*)malloc(sizeof(struct node));
    newnode2->data=3;
    newnode2->link=NULL;
    newnode->link=newnode2;

    cout<<"Deleting the node in the first."<<endl;
    if(head==NULL)
    {
        cout<<"There are no node."<<endl;
    }
    else
    {
        temp=head;
        head=head->link;
        free(temp);
    }

    cout<<"Printing the Linked Lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    return 0;
}
