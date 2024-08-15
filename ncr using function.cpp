//find ncr using function
#include<stdio.h>
#include<conio.h>
int fact(int);
int n,r;
int main ()
{
	long int f1,f2,f3,ncr;
	printf("Enter the value of n and r");
	scanf("%d %d",&n,&r);
	f1 = fact(n);
	f2 = fact(r);
	f3 = fact(n-r);
	ncr=f1/(f2*f3);
	printf("The value of ncr = %ld",ncr);
	return 0;
}
int fact(int x)
{
	int i;
	long int f=1,ncr;
	
		for(i=1;i<=x;i++)
		{
		f=f*i;
	    }
		return(f);
}


