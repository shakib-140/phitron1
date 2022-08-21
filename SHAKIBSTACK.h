#include<bits/stdc++.h>
using namespace std;
template<typename N>class node
{
public:

    N value;
    node*Next;
    node* prev;
    node(N val)
    {
        value=val;
        Next=NULL;
        prev=NULL;
    }
};
template<typename S>class Stack
{
    node<S>*head;
    node<S>* top;
    int Count=0;
public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    //push
    void Push(S val)
    {
        node<S>*newnode=new node<S>(val);
        if(head==NULL)
        {
            head=top=newnode;
            Count++;
            return ;
        }
        top->Next=newnode;
        newnode->prev=top;
        top=top->Next;
        Count++;
    }
    //pop
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
        if(head==top)
        {
            head=top=NULL;
        }
        else
        {

            top=delnode->prev;
            top->Next=NULL;
        }
        chk=delnode->value;
        delete delnode;
        Count--;
        return chk;
    }
    //emty
    bool Emty()
    {
        if(head==NULL)
        {
            return true;
        }
        else
            return false;

    }
    //size
    int Size()
    {
        return Count;
    }
    //top
    S Top()
    {
        S chk;
        if(top==NULL)
        {
            cout<<"stack underflow there is no value in this link list"<<endl;

        }
        else
            chk= top->value;
        return chk;
    }
};

