#include<stdio.h>
int main()
{
	void swap(int *,int *);
	int a,b;
	printf("Enter 2  numbers: ");
	scanf("%d%d",&a,&b);
	printf("\npreswaping a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n Post swaping a=%d,b=%d",a,b);
	return 0;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	return;
}
