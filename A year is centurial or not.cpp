//A year is centurial or not
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,r;
	printf("Enter a year");
	scanf("%d",&n);
	if(n%100==0)
	printf("The year %d is centurial",n);
	else
	printf("The year %d is not centurial",n);
	return 0;
}
