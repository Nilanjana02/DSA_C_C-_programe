#include<stdio.h>
int main()
{
	int n,i,r;
	int a[100];
	i=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		a[i]=r;
		i++;
		n=n/10;
	}
	printf("\n%d",i);
	printf("\nFirst %d",a[i-1]);
	printf("\nLast %d",a[0]);
	for(int j=(i-1);j>=0;j--)
	   printf("\n  %d ",a[j]);
}
