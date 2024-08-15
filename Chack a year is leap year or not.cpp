//Check a year is leap-year or not
#include<stdio.h>
int main ()
{
	int n,r1,r2;
	printf("Enter a year");
	scanf("%d",&n);
	r1=n%400;
	r2=n%4;
	if((r1==0)||(r2==0))
	printf("The year %d is leap-year",n);
	else
	printf("The year %d is not leap-year",n);
	return 0;
	
}
