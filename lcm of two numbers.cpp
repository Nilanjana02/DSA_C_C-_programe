#include<stdio.h>
int main()
{
	int a,b,gcd;
	long int lcm;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a&&i<=b;++i)
	{
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	printf("\n%d",gcd);
	lcm=(a*b)/gcd;
	printf("\nLCM of two given numbers is %ld",lcm);
	return 0;
}