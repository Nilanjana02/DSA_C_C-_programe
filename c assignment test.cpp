#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20];
	int n,p,k;
	printf("Enter total no of element: ");
	scanf("%d",&n);
	printf("\nEnter the %d element: ",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" array : ");
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the position where the data you want to insert: ");
	scanf("%d",&p);
	printf("\nEnter the element: ");
	scanf("%d",&k);
	
	for(int i=n;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=k;
	printf("\nthe array : ");
	for(int i=1;i<=n+1;i++)
	{
		printf("%d ",a[i]);
	}
}
