#include<stdio.h>
int main ()
{
    int n;
	int i,rem,c;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		int k=n;
		c=0;
		while(k!=0)
		{
			rem=k%10;
			if(i==rem)
			  c++;
		//printf("\nrem %d",rem);
			k=k/10;
		}
		printf("\nFrequency of digit %d is %d",i,c);
	}
	   
}
