#include<stdio.h>
int main()
{
	int n,a[10],temp,min;
	printf("Enter the total number of element: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n-i-1;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		  	
		}
		temp= a[i];
		a[i]=a[min];
		a[min]=temp;
		
	
		for(int k=0;k<n;k++)
		printf(" %d ",a[k]);
		printf("\n");
	}
}
