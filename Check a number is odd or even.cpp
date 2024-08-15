//Check a number is odd or even
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n%2==0)
	printf("Number %d is even",n);
	else
	printf("Number %d is odd",n);
	return 0;
	
}
