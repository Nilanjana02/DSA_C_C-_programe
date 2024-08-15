#include<stdio.h>
#include<stdlib.h>
struct com{
	float real;
	float imag;
};
int main()
{
	struct com com1,com2;
	printf("Enter the real and img part for 1st complex: ");
	scanf("%f%f",&com1.real,&com1.imag);
	printf("Enter the real and img part for 2st complex: ");
	scanf("%f%f",&com2.real,&com2.imag);
	printf("the final complex is %f + i%f",com1.real+com2.real,com1.imag+com1.imag);
}
