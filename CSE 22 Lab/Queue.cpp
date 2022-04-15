#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;
};
node * front, *rear;

void print_list(node *tmp)
{
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->link;
    }
    cout<<endl;
}

void enQueue(int dat)
{
    node *tmp = new node();
    tmp->data = dat;
    tmp->link = nullptr;

    if(front == nullptr)
    {
        front = rear = tmp;
    }
    else
    {
        rear->link = tmp;
        rear = tmp;
    }
}

void deQueue()
{
    if(front == nullptr)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        front = front->link;
        if(front == nullptr)
            rear = nullptr;
    }
}

int main()
{
    enQueue(23);
    enQueue(24);
    enQueue(25);
    print_list(front);
    deQueue();
    print_list(front);

    return 0;
}