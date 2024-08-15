
//Check a number is strong or not
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,k,r,s=0,i,p;
	printf("Enter a number");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		p=1;
		i=1;
	while(i<=r)
	{
		p=p*i;
		i++;
	}
	s=s+p;
	}
	if(k==s)
	printf("The number %d is a strong number",k);
	else
	printf("The number %d is not a strong number",k); 
	return 0;
}

