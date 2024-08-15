#include<stdio.h>
int main()
{
	int blank = 40,b,i,j,k,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	for(b=1;b<=blank;b++)
    	printf(" ");
    	blank=blank-2;
    //	for(j=1;j<=i-1;j++)
    //	printf("* ");
    	printf("* ");
    	for(k=i-1;k>=1;k--)
     	printf("* ");
    	printf("\n");
	}
	return 0;
}
