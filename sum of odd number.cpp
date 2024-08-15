#include<stdio.h>
#include<conio.h>
int main ()
{
	int n, i,s;
	printf("Enter the value of n");
	scanf("%d",&n);
	s=0;
	i=1;
	while(i<=n)
	{
		if(i%2!=1);
		{
			s=s+i;
		}
		i++;
	}
	printf("sum of n odd numbers = %d",s);
	getch ();
	return 0;
}
