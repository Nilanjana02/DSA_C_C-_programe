//Find the lagest of four number
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,big;
	printf("Enter four number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a=big;
	if(b>big)
	big=b;
	if(c>big)
	big=c;
	if(d>big)
	big=d;
	printf("Largest of four nember = %d",big);
	return 0;
}
