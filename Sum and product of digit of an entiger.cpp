//sum and product of digit of an integer
#include<stdio.h>
#include<conio.h>
int main ()
{
	int p,s=0,n,r,k;
	printf("Enter the value of n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of digit = %d",s);
	p=1;
	while(k!=0)
	{
	    r=k%10;
		p=p*r;
		k=k/10;	
	}
	printf("\n\nProduct of digit = %d",p);
	return 0;
}
