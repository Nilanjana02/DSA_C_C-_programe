#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,i;
	float f;
	printf("Enter the value of n");
	scanf("%d",&n);
	f=sqrt(n);
	i=f;
     if(i==f)
     printf("%d is a perfect square",n);
     else
     printf("%d is not a perfect square",n);
     return 0;
}
