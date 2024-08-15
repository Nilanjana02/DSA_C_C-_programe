#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,r,i,s,k,p;
	printf("Enter a octal number");
	scanf("%d",&n);
	k=n;
	i=0;
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(8,i);
		i++;
		n=n/10;
	}
	p=0;
	i=0;
	while(s!=0)
	{
		r=s%2;
		p=p+r*pow(10,i);
		i++;
		s=s/2;
	}
	printf("The binary equivalent of %d=%d",k,p);
	return 0;
}
