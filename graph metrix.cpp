#include<stdio.h>
#define N 6
void init(int arr[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			arr[i][j]=0;
		}
	}
}
void enteredge(int arr[N][N],char sr,char d)
{
//	char p=1,q=2,r=2,s=3,t=4,u=5;
//	printf("value: %d%d\n\n",sr,d);
	arr[sr][d]=1;
}
void print(int arr[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
}

void CountE(int arr[N][N])
{
	int C=0,Cy=0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(arr[i][j]==1)
			{
				C++;
			}
			if(arr[i][j]==1 && i==j)
			{
				Cy++;
			}
		}
	}
	printf("\n\n The no of edge: %d",C);
	printf("\n\n The Cycle : %d",Cy);
}
void Degree(int arr[N][N])
{
	int p=0;
	for(int i =0;i<N;i++)
	{
	//	printf("\n\n %d\n",arr[i][0]);
	    p=p+arr[0][i]+arr[i][0];
	//	printf("%d the ",p)	;
	}
	p=p-arr[0][0];
	printf("\nthe degree of p: %d",p);
}
int main()
{
	int arr[N][N];
	init(arr);
	char p=0,q=1,r=2,s=3,t=4,u=5;
	enteredge(arr,p,q);
	enteredge(arr,p,p);
	enteredge(arr,p,s);
	enteredge(arr,p,t);
	enteredge(arr,q,r);
	enteredge(arr,q,s);
	enteredge(arr,r,s);
	enteredge(arr,r,u);
	enteredge(arr,s,t);
	enteredge(arr,s,u);
	enteredge(arr,t,u);
	print(arr);
	CountE(arr);
	Degree(arr);
}
