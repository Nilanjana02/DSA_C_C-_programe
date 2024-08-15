#include<stdio.h>
int main()
{
	int row,i,j,s;
	printf("Enter how many row do you want to print:  ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(s=1;s<=row-i;s++)
			printf(" ");
		for(j=1;j<=i;j++)	
			printf("%d",(j+1)%2);
		
		printf("\n");
	}
	return 0;
}
