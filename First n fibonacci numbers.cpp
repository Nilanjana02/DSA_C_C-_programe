//To generate fast n fibonacci numbers
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,i,j,k,c;
	printf("Enter the value of n");
	scanf("%d",&n);
	i=0;
	j=1;
	printf("\n%d",i);
	printf("\n%d",j);
	c=2;
	while(c<n)
	{
		k = i + j;
		c++;
		printf("\n%d", k);
		i = j;
		j = k;
	}
	return 0;
}
