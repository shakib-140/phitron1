#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node*next;
    node*prev;
    node(int val)
    {
        value=val;
        next=NULL;
        prev=NULL;
    }
};
class Stack
{
    node*head;
    node*top;
    int Count=0;
public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    void Push(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        {
            head=top=newnode;
            Count++;
            return;
        }
        else
        {
            top->next=newnode;
            newnode->prev=top;
            top=newnode;
            Count++;
        }

    }
    int Pop()
    {

        node*delnode;
        delnode=top;
        int chk=-1;
        if(head==NULL)
        {
            cout<<"stack underflow"<<endl;
            return chk;
        }
        if(top==head)
        {
            head=top=NULL;
        }
        else
        {
            top=delnode->prev;
            top->next=NULL;
        }
        chk=delnode->value;
        delete delnode;
        Count--;
        return chk;
    }
    bool Emty()
    {
        if(head==NULL) return true;
        else  return false;
    }
    int Top()
    {
        if(top==NULL)
        {
            cout<<"stack underflow"<<endl;
        }
        else
            return top->value;
    }
    int Size()
    {
        return Count;
    }

};

