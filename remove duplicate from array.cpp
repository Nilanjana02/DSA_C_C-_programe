#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("Enter the total number of array element: ");
	scanf("%d",&n);
	printf("\nEnter %d elements of the array:",n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			    for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;	
			}
		}
	}
	printf("\nAfter deleting all duplicate elements the array is :");
	for( i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
