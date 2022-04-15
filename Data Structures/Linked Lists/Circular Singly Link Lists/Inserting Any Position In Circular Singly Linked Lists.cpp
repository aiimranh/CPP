//
// Created by AIIH on 2/6/2021.
//

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail;
void createcll()
{
    int item=1;
    struct node *newnode;
    cout<<"How many node want to create?"<<endl;
    cin>>item;
    while(item>0) {
        newnode = (struct node *) malloc(sizeof(struct node));
        newnode->next = nullptr;
        cout << "Enter the value" << endl;
        cin >> newnode->data;
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        newnode->next=head;
        item--;
    }
}
void displaycll()
{
    struct node *temp;
    temp=head;
    do
    {
        cout<<temp->data;
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
void insertacll()
{
    int pos;
    struct node *temp,*newnode;
    newnode=(struct node *) malloc(sizeof(struct node));
    temp=head;
    cout<<"where are you insert?"<<endl;
    cin>>pos;
    cout<<"Enter the inserting value "<<endl;
    cin>>newnode->data;
    if(pos==0)
    {
        newnode->next=head;
        tail=newnode;
    }
    else {
        while (--pos > 0) {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int main()
{
    createcll();
    displaycll();
    insertacll();
    displaycll();
    return 0;
}


