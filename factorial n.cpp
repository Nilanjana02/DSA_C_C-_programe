#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,s=1,i=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s*i;
		i++;
	}
	printf("factorial of %d = %d",n,s);
	return 0;
}
