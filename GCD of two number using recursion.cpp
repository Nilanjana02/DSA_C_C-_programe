//GCD of two number using recursion
#include<stdio.h>
#include<conio.h>
int main ()
{
	int gcd(int,int);
	int x,y,g;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	g=gcd(x,y);
	printf("GCD = %d",g);
	return 0;
}
int gcd(int a,int b)
{
	int r;
	r=a%b;
	a=b;
	b=r;
	if(r!=0)
	gcd(a,b);
	else
	return a;
}
