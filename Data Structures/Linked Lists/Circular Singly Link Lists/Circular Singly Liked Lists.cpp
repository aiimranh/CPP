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

}
int main()
{
    createcll();
    displaycll();
    return 0;
}
