//to display palindrome numbers between the range a to b
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,a,b,k,r,s;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++)
	{
		k=n;
		s=0;
		while(k!=0)
		{
			r=k%10;
			s=10*s+r;
			k=k/10;
		}
		if(n==s)
		printf("\n%d",n);
	}
	return 0;
}
