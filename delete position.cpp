#include<stdio.h>
int main()
{
	int a[20],n,p;
	printf("Enter the total no of element: ");
	scanf("%d",&n);
	printf("Enter the element: ");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position: ");
	scanf("%d",&p);
	for(int i=p;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(int i=1;i<n;i++)
	{
		printf("\n\n\n%d ",a[i]);
	}
}
