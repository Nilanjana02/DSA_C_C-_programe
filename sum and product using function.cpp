//Sum and product of two number using function
#include<stdio.h>
#include<conio.h>
int main ()
{
	int sum (int,int);
	int product (int,int);
	int a,b,c,p;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=sum (a,b);
	p=product (a,b);
	printf("Sum = %d",c);
	printf("\n Product = %d",p);
	return 0;
}
int sum (int x,int y)
{
	int s;
	s=x+y;
	return(s);
}
int product (int x,int y)
{
	int m;
	m=x*y;
	return(m);
}

