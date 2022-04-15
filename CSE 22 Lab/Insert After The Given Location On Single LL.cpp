#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int num = 0, pos = 0, i=1;
    struct node *head, *newnode, *newnode2, *newnode3, *temp;
    head= new node();
    head->data=10;
    head->link=nullptr;

    newnode= new node()
    newnode->data=20;
    newnode->link=nullptr;
    head->link=newnode;

    newnode2=new node();
    newnode2->data=30;
    newnode2->link=nullptr;
    newnode->link=newnode2;

    cout<<"Printing the linked lists."<<endl;
    temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
        num++;
    }

    cout<<"where you insert?\nIndexing start with 0:"<<endl;
    cin>>pos;
    if (pos>num)
    {
        cout<<"Invalid index."<<endl;
    }
    else {
        if (pos == 1) {
            temp = head;
        } else {
            temp = head;
            while (i < pos) {
                temp = temp->link;
                i++;
            }
        }


        newnode3 = (struct node *) malloc(sizeof(struct node));
        cout << "Enter the the data:" << endl;
        cin >> newnode3->data;
        if (pos == 0) {
            newnode3->link = temp;
            head = newnode3;
        } else if (pos == num) {
            newnode3->link = nullptr;
            temp->link = newnode3;
        } else {
            newnode3->link = temp->link;
            temp->link = newnode3;
        }

        cout << "Printing the Linked Lists." << endl;
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->link;
        }
    }
    return 0;
}