#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

node * head;
void printlist(node *tmp)
{
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->link;
    }
}
void makelist(int dat)
{
    node *tmp = new node();
    tmp->data = dat;
    tmp->link = nullptr;

    if(head == nullptr)
    {
        head = tmp;
    }
    else// finding null position.
    {
        node *temp = head;
        while(temp->link != nullptr)
        {
            temp=temp->link;
        }
        temp->link = tmp;
    }
}

int main()
{
    //manual  linked list create
    /*node *head = new node();
    head->data = 10;
    head->link = nullptr;

    node *first = new node();
    first->data = 20;
    first->link = nullptr;
    head->link = first;*/

    int data, many=1;
    cout<<"How many element in linked list?\n"<<"->";
    cin>>many;
    if(many<1) many=1;
    cout<<"Enter the datas.\n";

    while(many>0)
    {
        cout<<"->";
        cin>>data;
        makelist(data);
        many--;
    }

    int value;
    cin>>value;
    node *tmp;
    tmp = head;
    while(tmp != nullptr)
    {
        if(tmp->data == data)
        {

        }
    }
    printlist(head);
    return 0;
}