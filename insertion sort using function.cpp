#include<stdio.h>
int main()
{
	int a[20],n,i,j,k,temp;
	void insertion(int a[],int n);
	printf("Enter how many elements: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion(a,n);
	return 0;
}
void insertion (int a[],int n)
{
	int i ,k,j,temp,ex;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
	}
		a[j+1]=temp;
		printf("\n After %d ieration: ",k);
	    for(i=0;i<n;i++)
     	printf(" %d",a[i]);
     	printf("\n");
	}
}
