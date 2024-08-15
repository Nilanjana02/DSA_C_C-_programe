//Searching element of one dimensional array
#include<stdio.h>
#include<conio.h>
int main ()
{
	int search,flag,i,n,a[40];
	printf("Enter how many array elements");
	scanf("%d",&n);
	printf("\nEnter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter element to search");
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
	return 0;
}
