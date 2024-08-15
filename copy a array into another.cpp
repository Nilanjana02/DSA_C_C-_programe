#include<stdio.h>
int main()
{
	int a[20],b[20],*p,*q,n;
	printf("Enter the no of element: ");
	scanf("%d",&n);
	printf("Enter the element: ");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
	p=&a[0];
	for(int i=0;i<n;i++)
	{
		b[i]=*p;
		p++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
}
