#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,i,j,k;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	i=0;
	j=1;
	printf("\n%d",i);
	printf("\n%d",j);
	k=i+j;
	while(k<=n)
	{
		printf("\n%d",k);
		i=j;
		j=k;
		k=k+j;
	}
	return 0;
}
