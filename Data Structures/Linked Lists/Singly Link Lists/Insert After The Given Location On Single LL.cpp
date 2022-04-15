#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int num=0,pos=0,i=1;
    //cout<<"Creating node."<<endl;
    struct node *head, *newnode, *newnode2, *newnode3, *temp;
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

    //cout<<"Inserting the new node after the first one."<<endl;

    cout<<"Insert after where?"<<endl;
    cin>>pos;

    //cout<<"counting the Linked Lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
        num++;
    }
    if(pos>num)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->link;
            i++;
        }

        newnode3=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter the the data()"<<endl;
        cin>>newnode3->data;
        newnode3->link=temp->link;
        temp->link=newnode3;
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
