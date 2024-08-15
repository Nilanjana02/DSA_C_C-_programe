//Find ncr using function
#include<stdio.h>
#include<conio.h>
int main () 
{
	long int fact(int);
	int n,r,ncr;
	long int f1,f2,f3;
	printf("Enter the value of n and r");
	scanf("%d%d",&n,&r);
	if(n>r)
	{
	f1=fact(n);
	f2=fact(r);
	f3=fact(n-r);
	ncr=f1/(f2*f3);
	printf("The value of ncr = %d",ncr);
}
else
printf("NCR is not evaluated",ncr);
return 0;	
}
long int fact(int x)
{
	int i;
	long int f=1;
	for(i=1;i<=x;i++)
	f=f*i;
	return(f);
}
