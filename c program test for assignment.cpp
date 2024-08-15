#include<stdio.h>
int main()
{
	int n,r,last,first,a[20],temp,c,k;
	printf("Enter a number: ");
	scanf("%d",&n);
	int p=n;
	int i=0;
	while(n!=0)
	{
		r=n%10;
		c=0;
		while(p!=0)
		{
			k=p%10;
			if(k==r)
			{
				c++;
			}
			p=p/10;
		}
		printf("\nThe frequency of %d is %d .",r,c);
		
		n=n/10;	
	}
}
