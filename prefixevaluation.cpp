#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
int prefixevaluation(string chk)
{
    Stack<int>st;
    for(int i=chk.length()-1; i>=0; i--)
    {
        if(chk[i]>='0'&&chk[i]<='9')
        {
            st.Push(chk[i]-'0');
        }
        else
        {
            int a=st.Pop();
            int b=st.Pop();
            switch(chk[i])
            {
            case '+':
                st.Push(a+b);
                break;
            case '-':
                st.Push(a-b);
                break;
            case '*':
                st.Push(a*b);
                break;
            case '/':
                st.Push(a/b);
                break;
            case '^':
                st.Push(pow(a,b));
                break;
            default:
                break;

            }
        }
    }
    return st.Top();
}
int main()
{
    cout<<prefixevaluation("+*423");
}
