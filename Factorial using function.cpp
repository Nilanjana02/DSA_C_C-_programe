//Factorial using function
#include<stdio.h>
#include<conio.h>
int main ()
{
	long int fact (int);
	int n;
	long int f;
	printf("Enter the value of n");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial = %d",f);
	return 0;
}
long int fact (int n)
{
	int i;
	long int p=1;
	for(i=1;i<=n;i++)
	p=p*i;
	return(p);
}
