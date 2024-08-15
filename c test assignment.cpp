#include<stdio.h>
#include<math.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],r1,c1,r2,c2,*p,*q;
	printf("Enter the row and column of first: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of 2nd: ");
	scanf("%d%d",&r2,&c2);
	for(int i=0;i<r1;i++)
	{
		printf("Enter the %d element for %d row for 1st: ",c1,i+1);
		for(int j=0;j<c1;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	for(int i=0;i<r2;i++)
	{
		printf("Enter the %d element for %d row for 2nd: ",c2,i+1);
		for(int j=0;j<c2;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	p=&a[0][0];
	q=&b[0][0];
	if(r1==r2 && c1==c2)
	{
	
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
			    *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);		
			}
		}
	}
	
		/*for(int i=0;i<c1;i++)
		{
			//int s=0;
			for(int j=0;j<r1;j++)
			{
			    s=s+a[j][i];		
			}
			printf("\ntotal for %d column = %d",i,s);
		}*/
	
	printf("The matrix will be: \n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}
}
