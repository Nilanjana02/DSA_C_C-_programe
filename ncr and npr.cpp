#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,r,i;
	long int ncr,npr,f1=1,f2=1,f3=1;
	printf("Enter the value of n and r");
	scanf("%d%d",&n,&r);
	if(n>=r)
	{
		for(i=1;i<=n;i++)
		f1=f1*i;
		for(i=1;i<=r;i++)
		f2=f2*i;
		for(i=1;i<=(n-r);i++)
		f3=f3*i;
		ncr=f1/(f2*f3);
		npr=f1/f3;
		printf("The value of ncr and npr are %ld and %ld",ncr,npr);
	}
		else
		printf("NCR and NPR are not evaluated",ncr,npr);
		return 0;
		
	}

