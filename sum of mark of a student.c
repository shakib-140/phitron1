#include<stdio.h>
struct student
{
    char name[100];
    int id;
    int marks;
    int total;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student students[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);

    }
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<i; j++)
        {
            if(students[i].id==students[j].id)
            {
                sum=sum+students[j].marks;
            }
        }
        int new_sum=sum+students[i].marks;
        students[i].total=new_sum;
    }
    printf("\n\n\n");

   for(int i=0; i<n; i++)
      {
      printf("%s %d %d %d\n",students[i].name,students[i].id,students[i].marks,students[i].total);
  }

}
/*


4
shakib 6666 55
shakib 6666 88
rakib 5555 77
rakib 5555 96



*/
