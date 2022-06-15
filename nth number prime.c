#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j;
    while(i<=n)
    {
        int count=0;
        for(j=2; j<i-1; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
        i++;
    }
}
