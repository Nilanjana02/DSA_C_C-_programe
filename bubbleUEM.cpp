#include<stdio.h>
int main()
{
	int n,a[10],temp;
	printf("Enter the total number of element: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
		for(int k=0;k<n;k++)
		printf(" %d ",a[k]);
		printf("\n");
	
		
	}
}
