#include<stdio.h>
int main()
{
	int a[50][50],r,c;
	printf("Enter the no of row and no of column: ");
	scanf("%d%d",&r,&c);
	for(int i=1;i<=r;i++)
	{
		printf("\nEnter %d elements for %d row : ",c,i);
		for(int j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix is: \n");
    for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe transpose form of the given matrix is: \n");
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=r;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
