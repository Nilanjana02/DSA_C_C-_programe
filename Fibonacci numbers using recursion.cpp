#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,i;
	long int Fibonacci(int);
	printf("Enter how many fibonacci numbers you want to display: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("  %ld\n",Fibonacci(i));
	return 0;
}
long int Fibonacci(int n)
{
	if(n==1)
	  return(0);
	else if(n==2)
	  return(1);
	else
	  return(Fibonacci(n-1)+Fibonacci(n-2));
}
