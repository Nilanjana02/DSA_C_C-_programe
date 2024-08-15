#include<stdio.h>
int main()
{
	int a[50][50],r,c;
	printf("Enter the no of row and no of column: ");
	scanf("%d%d",&r,&c);
	for(int i=1;i<=r;i++)
	{
		printf("\nEnter the %d row element: ",i);
		for(int j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The sparse matrix is: \n");
    for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
