#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct student
{
    char name[100];
    int id;
    int marks;
};
struct uniquestudent
{
    char name;
    int id;
    int total;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student students[n];
    struct uniquestudent unique_student[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);

    }
    int k=0;
    bool found=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(unique_student[j].id == students[i].id)
            {
                unique_student[j].total+=students[i].marks;
                found =true;
            }
        }
        if(found == false)
        {
            strcpy(unique_student[k].name,students[i].name);
            unique_student[k].id = students[i].id;
            unique_student[k].total = students[i].marks;
            k++;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }
    return 0;
}
