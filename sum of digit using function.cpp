//sum of digit of an integer using function
#include<stdio.h>
#include<conio.h>
int main ()
{
	int digit (int);
	int n,k,s;
	printf("Enter a number");
	scanf("%d",&n);
	k=n;
	s=digit (n);
	printf("The sum of digit of %d is %d",k,s);
	return 0;
}
int digit (int n)
{
	int r,s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	return(s);
}
