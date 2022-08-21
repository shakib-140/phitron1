#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
void inseratbottom(Stack<int>&chk,int chkelement)
{
    if(chk.Emty())
    {
        chk.Push(chkelement);
        return;
    }
    int topelement2=chk.Top();
    chk.Pop();
    inseratbottom(chk,chkelement);
    chk.Push(topelement2);
}

void reversestack(Stack<int>&chk)
{
    if(chk.Emty())
    {
        return;
    }
    int topelement=chk.Top();
    chk.Pop();
    reversestack(chk);
    inseratbottom(chk,topelement);


}
int main()
{
    Stack<int>st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    reversestack(st);
    while(!st.Emty())
    {
        cout<<st.Pop()<<endl;
    }
}
