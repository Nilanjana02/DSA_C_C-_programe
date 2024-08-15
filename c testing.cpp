#include<stdio.h>
#include<stdlib.h>
int main()
{
	void swap(int n,int **p,int **q);
	int a[20],b[20],**p,**q,n,s=0;
	printf("Enter the no of element: ");
	scanf("%d",&n);
	printf("Enter the element for a: ");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
	printf("Enter the element for b: ");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&b[i]);	
	}
	swap(n,(int**)&a,(int**)&b);
	printf("\nThe aray of a is:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe aray of b is:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
	void swap(int n,int **p,int **q)
	{
		int *t=(int *)malloc(n*sizeof(int));
		t=*p;
		*p=*q;
		*q=t;
	
	}
	
