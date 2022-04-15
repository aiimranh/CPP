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
    head= nullptr;
    struct node *newnode,*temp;
    while(i<choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter the data: "<<endl;
        cin>>newnode->data;

        newnode->prev= nullptr;
        newnode->next= nullptr;

        if(head== nullptr)
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
void insertend()
{
    struct node *temp,*temp2;
    temp2=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev= nullptr;
    temp->next= nullptr;
    cout<<"Enter the data which you want to Insert:\n";
    cin>>temp->data;

    while(temp2->next!= nullptr)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    temp->prev=temp2;
    head2=temp;
}
void displaylistforw()
{
    struct node *temp;
    cout<<"Printing the forward form."<<endl;
    temp=head;
    while(temp!= nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void displaylistbackw()
{
    struct node *temp;
    cout<<"Printing the backward form."<<endl;
    temp=head2;
    while(temp!= nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}
int main()
{
    doubcreate();
    insertend();
    displaylistforw();
    displaylistbackw();

    return 0;
}