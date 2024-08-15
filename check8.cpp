// check a number is negative,positive or zero
#include<stdio.h>
int main()
{
	double n;
	printf("Enter the number : ");
	scanf("%lf",&n);
	if(n<0)
	  printf("This is a negative number.");
	else if(n>0)
	  printf("This is a positive number.");
	else
	 printf("You Enter 0.");
    return 0;	  
}
