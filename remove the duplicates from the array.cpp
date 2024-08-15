#include<stdio.h>
int main()
{
	int a[20],i,j,n,k;
	printf("Enter how many array elements:");
	scanf("%d",&n);
	printf("Enter %d array elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("\nAfter deleting duplicates:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
