#include<stdio.h>
int main()
{
	int a[100][100],n,i,j,total;
	printf("Enter the total number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d student's individual marks in Math and English :",i+1);
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
	    total=0;
		for(j=0;j<2;j++)
		{
			total=total+a[i][j];
		}
		printf("\nTotal marks of %d student is %d",i+1,total);
	}
	return 0;
}
