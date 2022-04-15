#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

node * top;
void printlist(node *tmp)
{
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->link;
    }
    cout<<endl;
}
void push(int dat)
{
    node *tmp = new node();
    tmp->data = dat;
    tmp->link = nullptr;
    tmp->link = top;
    top = tmp;

}
void pop()
{
    if(top == nullptr)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        top = top->link;
    }
}

int main()
{
    push(23);
    push(24);
    push(25);
    printlist(top);
    pop();
    printlist(top);

    return 0;
}