//Find the sum of odd and even numbers separatly between a to b
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,s_odd=0,s_even=0,i;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	i=a;
	while(i<=b)
	{
		if(i%2==0)
		s_even=s_even+i;
		else
		s_odd=s_odd+i;
		i++;
	}
	printf("Sum of odd numbers from %d to %d = %d",a,b,s_odd);
	printf(" \n Sum of even numbers from %d to %d = %d",a,b,s_even);
	return 0;
}
