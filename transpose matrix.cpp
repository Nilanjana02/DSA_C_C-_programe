//Transpose of a matrix
#include<stdio.h>
int main()
{
	int a[5][5],row,col,i,j;
	printf("Enter number of row and column of the matrix:");
	scanf("%d%d",&row,&col);
	printf("Enter elements of the matrix: \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		printf("%d",&a[i][j]);
		printf("\n");
	}
	return 0;
}
