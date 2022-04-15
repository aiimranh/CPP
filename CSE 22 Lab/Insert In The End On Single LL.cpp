#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head, *newnode, *newnode2, *newnode3, *temp;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=nullptr;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=20;
    newnode->link=nullptr;
    head->link=newnode;

    newnode2=(struct node*)malloc(sizeof(struct node));
    newnode2->data=30;
    newnode2->link=nullptr;
    newnode->link=newnode2;

    //cout<<"Inserting the new node after the first one."<<endl;
    newnode3=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the the data:"<<endl;
    cin>>newnode3->data;
    newnode3->link=nullptr;
    newnode2->link=newnode3;

    cout<<"Printing the Linked Lists."<<endl;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    return 0;
}



