//sum of two number using function
#include<stdio.h>
#include<conio.h>
int main ()
{
	int sum (int,int);
	int a,b,c;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
printf("Sum = %d",c);
	return 0;
}
int sum (int x,int Y)
{
	int s;
	s=x+Y;
	return(s);
}
