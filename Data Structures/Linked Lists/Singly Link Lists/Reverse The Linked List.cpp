#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void getlength(struct node *head);

void makelist(struct node *head)
{
    cout<<"Creating the linked list"<<endl;
    struct node *newnode, *newnode2, *newnode3;

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
}

void displaylist(struct node *head)
{
    struct node *temp;
    temp=head;
    cout<<"Printing the list."<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }

}

void getlength(struct node *head)
{
    cout<<"Finding the total number of node."<<endl;
    struct node *temp;
    int num=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        num++;
    }
    cout<<num<<endl;
}

void reverselist(struct node *head)
{
    cout<<"Reverse the list using iterative method."<<endl;
    struct node *prev,*current,*next;
    prev=0;
    next=current=head;
    while(next!=NULL)
    {
        next=next->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
    displaylist(head);
}

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));;
    head->data=1;
    head->link=NULL;

    makelist(head);
    displaylist(head);
    reverselist(head);

    return 0;
}

