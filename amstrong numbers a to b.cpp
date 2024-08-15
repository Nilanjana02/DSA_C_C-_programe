//Display armstrong numbers between the range a to b
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
  int n,a,b,c,r,k,s,p;
  printf("Enter the value of a and b");
  scanf("%d%d",&a,&b);
  for(n=a;n<=b;n++)
  {
  	k=n;
  	c=0;
  	while(k!=0)
  	{
  		k=k/10;
  		c++;
    }
    p=n;
    s=0;
    while(p!=0)
    {
    	r=p%10;
    	s=s+pow(r,c);
    	p=p/10;
	}
	if(n==s)
	printf("\n%d",n);
    }
	return 0;	
}
