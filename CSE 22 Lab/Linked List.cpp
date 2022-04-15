#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void PrintList(Node* tmp)
{
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* tmp;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    PrintList(head);
    cout<<endl;

    // insert at first location
    // insert at middle location
    // insert at last location

    Node* fourth = new Node();
    fourth->data = 5;

    //insert the new_node at first
    fourth->next = head;
    head = fourth;

    PrintList(head);
    cout<<endl;

    //insert at specific location
    // insert value 15 after 10

    Node* fifth = new Node();
    fifth->data = 15;

    tmp = head;
    while (tmp->next != nullptr)
    {
        if(tmp->data == 10)
        {
            fifth -> next = tmp -> next;
            tmp -> next = fifth;
        }
        tmp = tmp->next;
    }

    PrintList(head);
    cout<<"\n";
    // 5 10 15 20 30

    //insert at last value 60
    Node* sixth = new Node();
    sixth->data = 60;
    sixth->next = nullptr;
    tmp = head;
    while(tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp->next = sixth;

    PrintList(head);
    cout<<endl;
    //5 10 15 20 30 60

    return 0;
}