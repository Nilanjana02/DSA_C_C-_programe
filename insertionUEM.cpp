#include<stdio.h>
int main()
{
	int n,temp,a[10],j;
	printf("Enter the total number: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++)
	{
		temp = a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		for(int k=0;k<n;k++)
		{
			printf(" %d ",a[k]);
		}
		printf("\n");
	}
	
}
