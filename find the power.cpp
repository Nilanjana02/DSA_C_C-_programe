#include<stdio.h>
int main()
{
	int base,exponent,i;
	long int power=1;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++)
	{
		power = power*base;
	}
	printf("\nPower of the number is = %ld",power);
	return 0;
}
