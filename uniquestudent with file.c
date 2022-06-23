#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct student
{
    char name[100];
    int id;
    int marks;
};
struct unique_student
{
    char name[100];
    int id;
    int total;
};
int main()
{
    FILE *inputfile=fopen("inputt.txt","r");
    if(inputfile==NULL)
    {
        printf("Not found");
        return 0;
    }
    FILE *outputfile=fopen("outputt.txt","w");
    int n;
    fscanf(inputfile,"%d",&n);
    struct student students[n];
    struct unique_student unique_students[n];
    int k=0;

    for(int i=0; i<n; i++)
    {
        fscanf(inputfile,"%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
    }

    for(int i=0; i<n; i++)
    {
        bool found=false;
        for(int j=0; j<k; j++)
        {
            if(unique_students[j].id == students[i].id)
            {
                unique_students[j].total+=students[i].marks;
                found=true;
            }
        }
        if(found == false)
        {

            strcpy(unique_students[k].name,students[i].name);
            unique_students[k].id = students[i].id;
            unique_students[k].total = students[i].marks;
            k++;
        }
    }
    printf("\n\n");
    for(int i=0; i<k; i++)
    {
        fprintf(outputfile,"%s %d %d\n",unique_students[i].name,unique_students[i].id,unique_students[i].total);
    }
    return 0;
}

