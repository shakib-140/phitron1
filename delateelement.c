#include<stdio.h>
void delate(int n,int *a,int pos)
{
    int i=pos+1;
    while(i<n)
    {
        a[i-1]=a[i];
        i++;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    delate(n,arr,pos);
    for(int i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }
}

