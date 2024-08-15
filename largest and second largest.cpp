
#include<stdio.h>
int main ()
{
	int i,n,j,t,a[20];
	void bubble(int a[],int n);
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
     	}
	}
	printf("The second largest element is %d ",a[n-2]);
	printf("\nThe largest element is %d ",a[n-1]);
	
	return 0;
}

