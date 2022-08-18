#include<bits/stdc++.h>
using namespace std;
template<typename T>T maximum(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<maximum<int>(1,2)<<endl;
    cout<<maximum<float>(1.77,2.88)<<endl;
    cout<<maximum<char>('q','a')<<endl;

    return 0;
}
