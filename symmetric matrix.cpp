#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],r,c;
	printf("Enter the no.of row and no. of column: ");
	scanf("%d%d",&r,&c);
	if(r!=c)
	{
		printf("It will not be a symmetric matrix..");
		printf("\nFor checking symmetric matrix you have to enter square matrix");

	}
	else
	{
	for(int i=0;i<r;i++)
	{
	printf("Enter %d elements for %d row: ",c,i+1);
	for(int j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
    }
    /*printf("The matrix is: \n");
    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}*/
	printf("The transpose of given matrix is: \n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int flag=1;
		for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			if(b[i][j]!=a[i][j]){
				flag=0;
				break;
				
			}
		}
	}
	if(flag==1)
	   printf("It is a symmetric matrix");
	else
       printf("It is not a symmetric matrix") ;    
    
}
}
