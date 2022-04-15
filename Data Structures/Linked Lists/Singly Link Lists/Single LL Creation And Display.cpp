#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void creation()
{
    while(choice==1)
    {
        newst=(struct node*)malloc(sizeof(struct node));

        cout<<"Enter the value"<<endl;
        cin>>newst->data;
        newst->link=0;

        if(head==NULL)
            head=temp=newst;
        else
        {
            temp->link=newst;
            temp=newst;
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>choice;
    }
}
void Display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
        count++;
    }
    cout<<"Total number of node: "<<count<<endl;
}
        newst=(struct node*)malloc(sizeof(struct node));

        cout<<"Enter the value"<<endl;
        cin>>newst->data;
        newst->link=0;

        if(head==NULL)
            head=temp=newst;
        else
        {
            temp->link=newst;
            temp=newst;
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>choice;
    }
int main()
{
    struct node *head,*newst,*temp;
    head=0;
    int choice=1,count=0;

    return 0;
}
