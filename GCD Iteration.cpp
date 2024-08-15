#include<stdio.h>
int hcf(int n1,int n2);
int main()
{
	int n1,n2;
	printf("Enter two positive integers: ");
	scanf("%d%d",&n1,&n2);
	printf("GCD of %d and %d is %d.",n1,n2,hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
	while(n1!=n2)
	{
		if(n1>n2)
		n1=n1-n2;
		else
		n2=n2-n1;
	}
	return n1;
}
