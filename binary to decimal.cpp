#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,k,r,s=0,i=0;
	printf("Enter a binary number");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(2,i);
		i++;
		n=n/10;
	}
	printf("Decimal equivalent of %d is %d",k,s);
	return 0;
}
