#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k,r,s=0,i=1,p=1;
	printf ("Enter a number");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		while(i<=0)
		{
			p=p*i;
			i++;
		}
		s=s+p;
		n=n/10;
	}
	if(k==s)
	printf("The number %d is a strong number",k);
	else
	printf("The number %d is not a strong number",k);
	return 0;
}
