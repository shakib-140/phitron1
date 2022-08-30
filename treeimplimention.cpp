#include<bits/stdc++.h>
using namespace std;
class treenode
{
public:
    int value;
    treenode*leftchild;
    treenode* rightchild;
    treenode(int data)
    {
        value=data;
        leftchild=NULL;
        rightchild=NULL;
    }
};
void spaceprint(int level);
void printtree(treenode* root,int level);

void printtree(treenode* root,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(root->leftchild==NULL&&root->rightchild==NULL)
    {
        cout<<root->value<<endl;
        return ;
    }
    else
    {
         cout<<endl;
        spaceprint(level);
        cout<<"root: "<<root->value<<endl;
    }
    if(root->leftchild!=NULL)
    {
         spaceprint(level);
        cout<<"left: ";
        printtree(root->leftchild,level+1);

    }
   if(root->rightchild!=NULL)
    {
        spaceprint(level);
                cout<<"right: ";
        printtree(root->rightchild,level+1);
    }

}
void spaceprint(int level)
{
    for(int i=0; i<level; i++)
    {
        cout<<"   ";
    }
}
int main()
{
    int n;
    cin>>n;
    treenode*allnodes[n];
    for(int i=0; i<n; i++)
    {
        allnodes[i]=new treenode(-1);
    }

    for(int i=0; i<n; i++)
    {
        int data,left,right;
        cin>>data>>left>>right;
        allnodes[i]->value=data;
        if(left!=-1)
        {
            allnodes[i]->leftchild=allnodes[left];
        }
        if(right!=-1)
        {
            allnodes[i]->rightchild=allnodes[right];
        }
    }
    printtree(allnodes[0],0);


    return 0;
}
/*

9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1




*/
