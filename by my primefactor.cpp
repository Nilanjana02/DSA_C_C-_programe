#include<stdio.h>
int main()
{
	int n,r,f;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
				printf("\n%d",i);
				n=n/i;
			    }
			    for(int j=2;j<n;j++)
			    {
			    	if(i%j==0)
			    	break;
			    	else
			    	printf("\n\n\n%d",i);
				}
			}
		}
	}
}
