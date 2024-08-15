#include<stdio.h>
int main()
{
	int a[50],n;
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	printf("\nEnter the %d elements: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe entered array elements are :");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
