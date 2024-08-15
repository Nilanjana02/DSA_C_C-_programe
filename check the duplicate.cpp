#include<stdio.h>
int main()
{
	int a[20],n;
	printf("Enter the total no. of elements: ");
	scanf("%d",&n);
	printf("Enter the %d elements : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			   for(int k=j;k<n-1;k++)
			   {
			   	  a[j]=a[j+1];
			   }
			   n--;
			   j--;	
			}	
		}
	}
	printf("After removing the duplicate number the array is: ");
	for( int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
