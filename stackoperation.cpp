#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
int main()
{
    Stack<string>st;
    st.Push("shakib");
    st.Push("khan");
    st.Push("shakil");
    while(!st.Emty())
    {
        cout<<st.Pop()<<endl;
    }
    cout<<st.Pop()<<endl;
    cout<<st.Top()<<endl;
    return 0;
}
