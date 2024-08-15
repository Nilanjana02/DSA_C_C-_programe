#include<stdio.h>
int main()
{
	int a[50],n,max1,max2,i;
	printf("Enter total number of elements :");
	scanf("%d",&n);
	printf("\nEnter %d elements of the array: ",n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max1=max2=0;

	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max2=max1;
			max1=a[i];
		}
       // if(max2<a[i]&&a[i]<max1)
       // {
       // 	max2=a[i];
	//	}
	}
	printf("\nThe second highest number in the array is : %d",max2);
	return 0;
}
