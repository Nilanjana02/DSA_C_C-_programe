 #include <stdio.h>
#include <stdlib.h>
struct company
{
    char name[20],adrs[50];
    int ph,no_Of_Employee;
};

int main(){
   
    struct company C;
    printf("Enter the company name,address,phone no and no_of_employee :  ");
    scanf("%s%s%d%d",C.name,C.adrs,&C.ph,&C.no_Of_Employee);
    printf("Details of the company");
    printf("company name=%s \n company address=%s \n company phone=%d \n company no_Of_Employee=%d ",C.name,C.adrs,C.ph,C.no_Of_Employee);
}

