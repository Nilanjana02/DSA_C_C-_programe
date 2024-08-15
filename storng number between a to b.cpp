//To display strong number between a to b
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,n,k,r,s=0,i,p;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;i++)
    {
	k=n;
	s=0;
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
	printf("\n%d",n);	
}
return 0;
}
