#include<stdio.h>
int main()
{
    FILE *inputfile;
    FILE *outputfile;
    inputfile=fopen("input.txt","r");
    outputfile=fopen("output.txt","w");
    if(inputfile==NULL)
    {
        printf(outputfile,"Not found");
        return 0;
    }
    int n;
    fscanf(inputfile,"%d",&n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int a;
        fscanf(inputfile,"%d",&a);
        sum=sum+a;
    }
    fprintf(outputfile,"sum ->%d",sum);
    return 0;
}
