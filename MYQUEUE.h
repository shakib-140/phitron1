#include<bits/stdc++.h>
using namespace std;
template<typename N>class node
{
public:
    N value;
    node*Next;
    node(N val)
    {
        value=val;
        Next=NULL;
    }
};
template<typename Q>class Queue
{
public:
    node<Q>*Front;
    node<Q>*Rear;
    Queue()
    {
        Front=NULL;
        Rear=NULL;
    }
    //PUSH
    void Push(Q val)
    {
        node<Q>*newnode=new node<Q>(val);
        if(Front==NULL)
        {
            Front=newnode;
            Rear=newnode;
            return;
        }
        Rear->Next=newnode;
        Rear=Rear->Next;
    }
    Q Pop()
    {
        Q chk;
        if(Rear==NULL)
        {
            cout<<"queue uder flow there is no value in the queue"<<endl;
            return chk;
        }
        node<Q>*delnode;
        delnode=Front;
        Front=Front->Next;
        if(Front==NULL)
        {
            Rear=NULL;
        }
        chk=delnode->value;
        delete delnode;
        return chk;
    }
    Q FFront()
    {
        Q chk=Front->value;
        return chk;
    }
    Q Back()
    {
        Q chk=Rear->value;
        return chk;
    }
    bool Emty()
    {
        if(Front==NULL&&Rear==NULL)
        {
            return true;
        }
        else
            return false;
    }
};


