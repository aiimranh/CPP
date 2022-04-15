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

void getlength(struct node *head)
{
    struct node *temp;
    int num=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        num++;
    }
    cout<<"total number of node: "<<num<<endl;
}

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));;
    head->data=1;
    head->link=NULL;

    makelist(head);
    getlength(head);

    return 0;
}

