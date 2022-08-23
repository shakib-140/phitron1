#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
int precitionset(char c);
int prefixevaluation(string chk);
string infixtoprefix(string chk);



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
string infixtoprefix(string chk)
{
    reverse(chk.begin(),chk.end());
    Stack<char>st;
    string result;
    for(int i=0; i<chk.length(); i++)
    {
        if(chk[i]>='0'&&chk[i]<='9')
        {
            result+=chk[i];
        }
        else if(chk[i]==')')
        {
            st.Push(chk[i]);
        }
        else if(chk[i]=='(')
        {
            while(!st.Emty()&&st.Top()!=')')
            {
                result+=st.Pop();
            }
            if(!st.Emty())
            {
                st.Pop();
            }
        }
        else
        {
            while(!st.Emty()&&  precitionset(st.Top())>= precitionset(chk[i]))
            {
                result+=st.Pop();
            }
            st.Push(chk[i]);
        }
    }
    while(!st.Emty())
    {
        result+=st.Pop();
    }
    reverse(result.begin(),result.end());
    return result;
}

int precitionset(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return -1;

}
int main()
{
    string infix="(7+(4*5))-(2+0)";
    cout<<infix;
    cout<<endl;
    string prefix=infixtoprefix(infix);
    cout<<prefix;
    cout<<endl;
    cout<<prefixevaluation(prefix);
}
