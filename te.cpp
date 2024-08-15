#include<stdio.h>
int main()
{
	int n,i,prime;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The prime factor of %d are : ",n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			prime=0;
			for(int j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=1;
					break;
				}
			}
			if(prime==0)
			   printf(" %d,",i);
		}
	}
	return 0;
}
