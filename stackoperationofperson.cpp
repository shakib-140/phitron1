#include<bits/stdc++.h>
#include"SHAKIBSTACK.h"
using namespace std;
int globalID=100;
class person
{
    string name;
    int id;
    float salary;
public:
    person()
    {
        name="";
        id=-1;
        salary=-1;
    }
    void setname(string name)
    {
        this->name=name;
    }
    void setsalary(float salary)
    {
        this->salary=salary;
    }
    person(string name,float salary)
    {
        setname(name);
        setsalary(salary);
        this->id=globalID;
        globalID++;

    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    float  getsalary()
    {
        return salary;
    }
    void print()
    {
        cout<<name<<"  |  "<<id<<"  |  "<<salary<<endl;
    }
};
int main()
{
    Stack <person>st;
    person a("shakib khan",3000000.6367);
    person b("shah alom",2500000.99);
    person c("kaocer",3000000.000);
    st.Push(a);
    st.Push(b);
    st.Push(c);
    while(!st.Emty())
   {
        person printoop;
        printoop=st.Pop();
        printoop.print();
    }
    cout<<endl<<endl;
     person d("jdsiodfio",30000565.000);
      st.Push(d);
    person xx;
    xx=st.Top();
    xx.print();
    cout<<endl;
    cout<<st.Size();
    return 0;
}

