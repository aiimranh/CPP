#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void displaylistforw(struct node *head)
{
    cout<<"Printing the forward form."<<endl;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void displaylistbackw(struct node *head)
{
    cout<<"Printing the reverse form."<<endl;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}


void getlength(struct node *head)
{
    struct node *temp;
    int num=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        num++;
    }
    cout<<"total number of node: "<<num<<endl;
}

void makelist(struct node *head)
{
    struct node *newnode, *newnode2;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=head;
    newnode->data=2;
    newnode->next=NULL;
    head->next=newnode;

    newnode2=(struct node*)malloc(sizeof(struct node));
    newnode->next=newnode2;
    newnode2->prev=newnode;
    newnode2->data=3;
    newnode2->next=NULL;
}

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=1;
    head->next=NULL;

    makelist(head);
    getlength(head);
    displaylistforw(head);
    displaylistbackw(head);
    getlength(head);

    return 0;
}

