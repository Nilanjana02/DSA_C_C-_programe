#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The prime factor of %d are : ",n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
	            printf("%d ",i);
	            n=n/i;
	   	    }
	   }
	
	}
	return 0;
}
