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
    struct node *head, *newnode, *newnode2, *newnode3, *temp, *temp2;
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

    newnode3=(struct node*)malloc(sizeof(struct node));
    newnode3->data=4;
    newnode3->link=NULL;
    newnode2->link=newnode3;
    //cout<<"Inserting the new node after the first one."<<endl;

    cout<<"Insert after where?"<<endl;
    cin>>pos;

    //cout<<"counting the Linked Lists."<<endl;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    temp2=temp->link;
    temp->link=temp2->link;
    free(temp2);

    cout<<"Printing the Linked Lists."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    return 0;
}
