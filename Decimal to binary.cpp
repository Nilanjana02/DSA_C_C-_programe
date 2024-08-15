//Decimal to binary
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,r,s=0,i=0;
	printf("Enter a decimal number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		s=s+r*pow(10,i);
		i++;
		n=n/2;
	}
	printf("The binary equivalent is %d",s);
	return 0;
}
