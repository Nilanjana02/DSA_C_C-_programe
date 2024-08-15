#include<stdio.h>
int main()
{
	int GCD(int d,int e);
	int a,b,n;
	printf("Enter the two number: ");
	scanf("%d%d",&a,&b);
	n=GCD(a,b);
	printf("GCD of two given number is = %d",n);
	return 0;
}
int GCD(int a,int b)
{
	int rem;
	if(a%b==0)
	   return b;
	else
	{
		rem=a%b;
		GCD(b,rem);
	}
}
