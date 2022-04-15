//
// Created by AIIH on 2/1/2021.
//

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *head2;

void doubcreate()
{
    int i=0,choice=3;
    head= NULL;
    struct node *newnode,*temp;
    while(i<choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter the data: "<<endl;
        cin>>newnode->data;

        newnode->prev= NULL;
        newnode->next= NULL;

        if(head== NULL)
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
        i++;
        if(i==3) {
            int k = 0;
            cout << "Do want to add more input?(int):" << endl;
            cin >> k;
            choice = choice + k - 1;
        }
    }
}

void insertbeg()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->next= NULL;
    cout<<"Enter the data which you want to Insert:\n";
    cin>>temp->data;
    temp->next=head;
    head=temp;

}
void displaylistforw()
{
    struct node *temp;
    cout<<"Printing the forward form."<<endl;
    temp=head;
    while(temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    doubcreate();
    insertbeg();
    displaylistforw();

    return 0;
}

