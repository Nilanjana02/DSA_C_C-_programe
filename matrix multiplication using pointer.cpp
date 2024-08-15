#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],n,r1,c1,r2,c2,r3,c3;
	printf("Enter the no. of row and no. of column of 1st matrix :");
	scanf("%d%d",&r1,&c1);
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("Enter the no. of row and no. of column of 2nd matrix :");
	scanf("%d%d",&r2,&c2);
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("Enter b[%d][%d]: ",i,j);
			scanf("%d",(*(b+i)+j));
		}
	}
	if(c1!=r2)
	{
		printf("multiplication is not possible...");
	}
	else
	{
		printf("\n After multiplication the new matrix will be:\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				*(*(c+i)+j)=0;
				for(int k=0;k<r2;k++)
				{
					*(*(c+i)+j) += (*(*(a+i)+k))* (*(*(b+k)+j));
				}
				printf("%d ",*(*(c+i)+j));
			}
			printf("\n");
		}
	}
	
}
