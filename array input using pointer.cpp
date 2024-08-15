#include<stdio.h>
int main()
{
	int a[100],n;
	 int *p=&a[0];
	printf("Enter the total array element you want to enter:");
	scanf("%d",&n);
	printf("\nEnter %d elements: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("\n The elements are :  ");
	p=&a[0];
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",*p);
		p++;
	}
	p=&a[n-1];
	printf("\n after reverse the elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*p);
		p--;
	}
	
}
