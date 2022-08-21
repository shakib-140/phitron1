#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
void wordreverse(string chk)
{
    Stack<string>st;
    for(int i=0; i<chk.length(); i++)
    {
        string word="";
        while(i<chk.length()&&chk[i]!=' ')
        {
            word+=chk[i];
            i++;
        }
       st.Push(word);
    }
    while(!st.Emty())
    {
        cout<<st.Pop()<<" ";
    }
}
int main()
{
    string s="I am shakib khan";
    wordreverse(s);
    return 0;
}
