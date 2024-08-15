#include<stdio.h>
int main()
{
	float square(float);
	float n,squ;
	printf("Enter any number:");
	scanf("%f",&n);
	squ=square(n);
	printf("Square of the given number %f is = %f",n,squ);
	return 0;
}
float square(float n)
{
 return(n*n);
}
