#include<stdio.h>
void pointer(int n,int *arr)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    pointer(n,arr);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
