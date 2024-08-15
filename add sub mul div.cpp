#include<stdio.h>
int main()
{
	void add(int n,int m);
	void sub(int n,int m);
	void mul(int n,int m);
	void div(int n,int m);
	int n,m;
	printf("Enter the two integer : ");
	scanf("%d%d",&n,&m);
	add(n,m);
	sub(n,m);
	mul(n,m);
	div(n,m);
	return 0;	
}
void add(int n,int m)
{
	printf("\nSum of %d and %d is %d.",n,m,n+m);
}
	void sub(int n,int m)
	{
			printf("\nSubstraction of %d and %d is %d.",n,m,n-m);
	}
	void mul(int n,int m)
	{
			printf("\nMultiplication of %d and %d is %d.",n,m,n*m);
	}
	void div(int n,int m)
	{
	  	printf("\nQuotient of %d and %d is %f.",n,m,(float)n/m);	
	}


