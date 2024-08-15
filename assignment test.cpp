#include<stdio.h>
int main()
{
	int n1,n2,lcm,gcd,i;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	for(i=2;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
		      gcd=i;
		  }
	}
	printf("The gcd is : %d",gcd);
	lcm=(n1*n2)/gcd;
	printf("\n lcm is %d ",lcm);
}
