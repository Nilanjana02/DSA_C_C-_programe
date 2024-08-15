#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
};

int main()
{
int i,n;
struct student stu[100];

printf("Enter total of students:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\n Enter information of student %d:\n",i+1);
printf("\nEnter name: ");
scanf("%s", stu[i].name);

printf("\nEnter roll number: ");
scanf("%d", &stu[i].roll);

printf("\nEnter marks: ");
scanf("%f", &stu[i].marks);
}

printf("\nDisplaying Information:\n");
for(i=0;i<n;i++)
{
printf("\n %d no. student info\n",i+1);
printf("\nName:%s",stu[i].name);
//or use
// puts(s[i].name);

printf("\n Roll number: %d",stu[i].roll);

printf("\n Marks: %.1f",stu[i].marks);

}

return 0;
}

 
