//Display prime numbers between the range a to b
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,a,b,i,flag;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++)
	{
		if(n==1)
		printf("The number %d is neither prime nor not prime",n);
		else
		{
			flag=1;
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			printf("\n %d",n);
	}
}
return 0;
		
	
}
