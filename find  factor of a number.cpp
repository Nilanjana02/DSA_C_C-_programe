#include<stdio.h>
int main()
{
	int n,co,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The factor of %d are : ",n);
	i=2;
	while(n!=1)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
			    printf("\n%d",i);
				n=n/i;	
			}
     	}
     	i++;
		   
	}
	return 0;
}
