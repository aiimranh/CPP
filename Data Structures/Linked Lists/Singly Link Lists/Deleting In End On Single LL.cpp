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
    struct node *head, *newnode, *newnode2, *temp, *temp2;
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

    cout<<"Deleting the node in the end."<<endl;

    temp=head;
    while(temp->link!=NULL)
    {
        temp2=temp;
        temp=temp->link;
    }
    if(head==temp)
    {
        head=0;
    }
    else
    {
        temp2->link=NULL;
    }
    free(temp);

    cout<<"Printing the Linked Lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    return 0;
}
