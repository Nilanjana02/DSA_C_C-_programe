 //Check a triangle is right angle or not
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf("Enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
	printf("The triangle is right angle");
	else
	printf("The triangle is not a right angle");
	return 0;
}
