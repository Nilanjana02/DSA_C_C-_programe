#include<stdio.h>
void selection(int a[],int n)
{
	int min,temp,k;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
		printf("After %d iteration: ",i+1);
		for(k=0;k<n;k++)
        printf(" %d",a[k]);
        printf("\n");
	}
}
int main()
{
	int a[20],n,i,j,k,temp;
	//void insertion(int a[],int n);
	printf("Enter how many elements: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection(a,n);
	return 0;
}
