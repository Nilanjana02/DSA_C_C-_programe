#include<stdio.h>
#include<conio.h>
int main (void)
{
	int a=5;
	begin:
	if(a)
		printf("%d\n",a);
		a--;
		goto begin;
	return 0;
}
