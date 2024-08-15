#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,r,k,s=0,i=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(8,i);
		i++;
		n=n/10;
	}
	printf("Decimal equivalent of %d = %d",k,s);
	return 0;
}
