#include<stdio.h>
int main()
{
	int sum(int n);
    int n;
    printf("Enter the total number of natural number: ");
    scanf("%d",&n);
    //s=sum(n);
    printf(" The sum is : %d ",sum(n));
	return 0;
	
	}
	int sum(int n)
	{
		if(n!=0)
		{
			return (n+sum(n-1));
		}
		
		return n;
	}
