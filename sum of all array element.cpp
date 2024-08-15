#include<stdio.h>
int main()
{
	int a[50],n,s=0;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	printf("Enter the %d array elements: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("The sum of all array element is %d. ",s);
}
