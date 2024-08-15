#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],row,col,i,j;
	printf("Enter number of row and column of the matrix: ");
	scanf("%d%d",&row,&col);
	printf("Enter elements of the matrix\n: ");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
}
	printf("\n given matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d\t",&a[i][j]);
		printf("\n");
	}
	return 0;
}
