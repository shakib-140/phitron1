#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;
int main()
{
    Queue<string>q;
    q.Push("shakib");
    q.Push("khan");

    cout<<q.Pop();
    cout<<endl;
    cout<<q.Pop();
    return 0;
}
