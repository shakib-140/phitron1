#include<bits/stdc++.h>
using namespace std;
template<typename T>class node
{
public:
    T value;
    node*next;
    node*prev;
    node(T val)
    {
        value=val;
        next=NULL;
        prev=NULL;
    }
};
 template<typename S>class Stack
{
    node<S>*head;
    node<S>*top;
    int Count=0;
public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    void Push(S val)
    {
        node<S>*newnode=new node<S>(val);
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
    S Pop()
    {

        node<S>*delnode;
        delnode=top;
        S chk;
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
    S Top()
    {
        S chk;
        if(top==NULL)
        {
            cout<<"stack underflow"<<endl;
        }
        else
            chk= top->value;
            return chk;
    }
    int Size()
    {
        return Count;
    }

};
