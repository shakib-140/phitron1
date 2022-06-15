#include<stdio.h>
#include<stdbool.h>
void copy(int n,int *a,int *b)
{
    for(int i=0; i<n; i++)
    {
        b[i]=a[i];
    }
}
void sort(int n,int *b)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
bool is_sorted(int n,int *a)
{
    int b[n];
    copy(n,a,b);
//    for(int i=0;i<n;i++)
//    {
//        printf("%d ",b[i]);
//    }
//    printf("\n");
    sort(n,b);
//     for(int i=0;i<n;i++)
//    {
//        printf("%d ",b[i]);
//    }
//    printf("\n");

    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
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
    bool ans=is_sorted(n,arr);
    if(ans==true)
    {
        printf("YES");
    }
    else
        printf("NO");

}

