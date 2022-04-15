#include<bits/stdc++.h>
using namespace std;

int siz;
struct node
{

    int value;
    node *link;
};
node *head;
void creation(int x)
{

    node *ptr= new node();
    ptr->value = x;
    ptr->link = nullptr;
    if(head== nullptr)
    {
        head = ptr; //only head address hold.
    }
    else
    {
        node *tmp= head;
        while(true)
        {
            if(tmp->link== nullptr)
            {
                tmp->link = ptr;
                break;
            }
            else
                tmp= tmp->link;
        }
    }
}
void traverse()
{
    node *tmp=head;
    cout<<"Elements Are: ";
    while(tmp != nullptr)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->link;
    }
    cout<<endl;
}
void First_delete()
{
    head=head->link;
    traverse();
}
void last_delete() {
    node *tmp, *seclast;
    tmp = head;
    if (head->link == nullptr) {
        First_delete();
    }
    else
    {
        while (tmp->link != nullptr) {
            seclast = tmp;
            tmp = tmp->link;
        }
        seclast->link = nullptr;
        traverse();
    }
}
void delete_given()
{
    int item;
    cout<<"Enter Element to Delete: ";
    cin>>item;

    node *tmp, *pretmp;
    tmp = head;

    while(tmp != nullptr)
    {
        if(tmp->value==item)
        {
            if(tmp == head)
            {
                First_delete();
                break;
            }
            else if(tmp->link== nullptr)
            {
                last_delete();
                break;
            }
            else
            {
                pretmp->link = tmp->link;
                traverse();
                break;
            }
        }
        else if(tmp->link == nullptr)
        {
            cout<<"Item not Found!!!\n";
            break;
        }
        else
        {
            pretmp = tmp;
            tmp = tmp->link;
        }
    }
}
void after_delete()
{
    int item;
    cout<<"Enter Element to Delete: ";
    cin>>item;

    node * tmp, *postmp;
    tmp = head;
    while(tmp != nullptr)
    {
        if(tmp->value== item)
        {
            postmp = tmp->link;
            if(postmp->link == nullptr)
            {
                last_delete();
                break;
            }
            else if(tmp->link== nullptr)
                break;
            else
            {
                tmp->link = postmp->link;
                traverse();
                break;
            }
        }
        else if(tmp->link == nullptr)
        {
            cout<<"Item not Found!!!\n";
            break;
        }
        else
            tmp = tmp->link;
    }
}
void before_delete()
{
    int item;
    cout<<"Enter Element to Delete: ";
    cin>>item;

    node * tmp, *pretmp;
    pretmp = tmp = head;
    while(tmp != nullptr)
    {
        if(tmp->value == item)
        {
            //tmp = tmp->link;
            if(tmp == head)
            {
                traverse();
                break;
            }
            else if(pretmp == head)
            {
                head = tmp;
                traverse();
                break;
            }
            else
            {
                node *check;
                check = head;
                while(check->link != pretmp)
                {
                    check= check->link;
                }
                check->link = pretmp->link;
                traverse();
                break;
            }
        }
        else if(tmp->link == nullptr)
        {
            cout<<"Item not Found!!!\n";
            break;
        }
        else {
            pretmp = tmp;
            tmp = tmp->link;
        }
    }
}

int main()
{
    int data, iter=0, choose;
    cout<<"Enter linked-list Size: ";
    cin>>siz;
    cout<<"Enter LinkedList: ";

    do
    {
        cin>>data;
        creation(data);
        iter++;
    }while(iter<siz);

    traverse();

    while(true)
    {
        cout<<"Enter Choice: ";
        cin>>choose;
        if(choose==1)
            First_delete();
        else if(choose==2)
            last_delete();
        else if(choose==3)
            delete_given();
        else if(choose==4)
            after_delete();
        else if(choose==5)
           before_delete();
        else
            break;
    }
}