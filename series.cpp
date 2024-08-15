#include<stdio.h>
#include<math.h>
int main (void)
{
	int s=0,x,i=0,n;
	printf("Enter the value of x and n");
	scanf("%d%d",&x,&n);
	while(i<=n)
	{
		s=s+pow(x,i);
		i++;
}
	printf("Sum of serise=%d",s);
	return 0;
}
