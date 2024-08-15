#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c,d,big;
	printf("Enter any four number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	big=a;
	if(b>big)
	big=b;
	if(c>big)
	big=c;
	if(d>big)
	big=d;
	printf("Largest=%d",big);
	return 0;
}
