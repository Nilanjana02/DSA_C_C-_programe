#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     Id;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    
    printf("\nEnter Employee Name:");         
	gets(emp.name);
    printf("\n ID:");           
	scanf("%d",&emp.Id);
    printf("\n Salary:");        
	scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered employee details is:");
    printf("\nName: %s"   ,emp.name);
    printf("\nId: %d"     ,emp.Id);
    printf("\nSalary: %f\n",emp.salary);
    return 0;
}
