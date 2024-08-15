//Smallest number using array
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[20],i,n,small,big;
	printf("Enter how many array elements");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		small=a[i];
		if(a[i]>big)
		big=a[i];	
	}
	printf("smallest = %d",small);
	printf("\nLargest = %d",big);
	return 0;
}
