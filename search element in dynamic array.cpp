#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,s;
	printf("Enter the total no. of array elements: ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter the %d elements: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Enter the search element: ");
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		if(s==*(p+i))
		{
			printf("The element is found in %d position",i+1);
			exit(1);
		}
	}
	printf("Element is not found..");
}
