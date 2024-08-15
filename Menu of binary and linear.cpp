#include<stdio.h>
int main()
{
	void linear();
	void binary();
	int x;
	do
	{
		printf("\n\t\t\t1.Linear Search.");
		printf("\n\t\t\t2.Binary Search.");
		printf("\n\t\t\t3.Exit.");
		printf("\n\n\t\t\tEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
	     case 1:
		        linear();
				break;
		 case 2:
		        binary();
				break;
		 case 3:
		       break;
		 default:
		      printf("Wrong choice........");	
		}
	}while(x!=3);
	return 0;	
}
void create()
{
	int n,i,a[40],search;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d elements: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the element to find: ");
	scanf("%d",&search);
	return;
}
void linear()
{
	int flag,i,n,a[40],search;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d elements: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the element to find: ");
	scanf("%d",&search);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
		flag=1;
		break;
	}
	}
	if(flag==1)
		printf("\n\n%d is found at position %d",search,i+1);
		else
		printf("\n%d is not found in the array",search);
	return;
}
void binary()
{
	int c,first,last,middle,n,search,array[100];
	printf("\nEnter number of elements ");
	scanf("%d",&n);
	printf("Enter %d integers\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("Enter value to find\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		first=middle+1;
		else if(array[middle]==search)
		{
			printf("%d found at location %d.\n\n",search,middle+1);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("Not found! %d is not present in the list.\n",search);
	return;	
}












