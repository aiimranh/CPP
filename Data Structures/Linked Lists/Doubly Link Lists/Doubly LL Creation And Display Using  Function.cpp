#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *head2, *newnode, *temp;

void doubcreate()
{
    int choice=1;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter the data: "<<endl;
        cin>>newnode->data;

        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
            head2=temp;
        }
        cout<<"Do want to more input?"<<endl;
        cout<<"1 for yes and 0 for no!"<<endl;
        cin>>choice;
        if(choice==1)
        {
            cout<<"Obvious"<<endl;
        }
        if(choice==0)
        {
            cout<<"That's Enough!"<<endl;
        }
    }
}

void displaylistforw()
{
    cout<<"Printing the forward form."<<endl;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void displaylistbackw()
{
    cout<<"Printing the reverse form."<<endl;
    temp=head2;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}

void getlength()
{
    int num=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        num++;
    }
    cout<<"total number of node: "<<num<<endl;
}

int main()
{
    doubcreate();
    displaylistbackw();

    return 0;
}

