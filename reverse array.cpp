#include<stdio.h>
int main()
{
	int a[50],n;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	printf("\nEnter the %d array elements: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe reverse array is: ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
