#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int num=0;
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

    temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        num++;
    }
    cout<<"total number of node: "<<num<<endl;
    return 0;
}
