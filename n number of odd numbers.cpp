//sum of n odd numbers
#include<stdio.h>
int main()
{
	int n,i,c=0,j=1;
	long int sum=0;
	printf("Enter how many odd numbers you want to display : ");
	scanf("%d",&n);
	while(c<n)
	{
		if(j%2!=0)
		{
			printf("%d,\t",j);
			sum=sum+j;
			c++;
		}
		j++;
	}
	printf("\nThe Sum of odd numbers is = %ld ",sum);
	return 0;
}
