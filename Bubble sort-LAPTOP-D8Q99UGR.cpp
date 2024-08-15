//Bubble sort
#include<stdio.h>
int main ()
{
	int i,n,j,t,a[20];
	void bubble(int a[],int n);
	printf("Enter the number of data elements:");
	scanf("%d",&n);
	printf("Enter the data:");
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	bubble(a,n);
	return 0;
}
void bubble(int a[],int n)
{
	int i,j,t;
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
     	printf("After %d iteration: ",i);
     	for(int k=0;k<n;k++)
	    printf(" %d",a[k]);
     	printf("\n\n");
	}
	printf("After last iteration the final sorted dataset is:\n");
	for(j=0;j<n;j++)
	printf(" %d",a[j]);
}
