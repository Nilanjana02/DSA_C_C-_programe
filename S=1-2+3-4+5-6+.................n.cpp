//display the serise 1-2+3-4+5-.........n
#include<stdio.h>
#include<conio.h>
int main ()
{
	int p,s,i,n,sign;
	printf("Enter the value of n");
	scanf("%d",&n);
	sign=1;
	s=0;
	for(i=1;i<=n;i++)
	{
		s=s+sign*i;
		sign=sign*(-1);
	}
	printf("Sum = %d",s);
	return 0;
}
