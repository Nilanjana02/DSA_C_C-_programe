#include<stdio.h>
int main()
{
	int n,i=1,r,k=1,s=0;
	printf("enter the total no. of odd number: ");
	scanf("%d",&n);
	printf("The %d odd numbers are: \n",n);
	while(i<=n)
	{
		if(k%2!=0)
		{
			i++;
			printf("\n%d",k);
			s=s+k;	
		}
		k++;
	}
	printf("\nThe sum of %d odd number is %d.",n,s);
	
}
