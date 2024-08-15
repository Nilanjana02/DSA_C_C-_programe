//Cube of numbers
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	long int cube;
	printf("Enter how many number cubes do you want to print :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cube = pow(i,3);
		printf("\nCube of %d = %ld",i,cube);
	}
	return 0;
	
}
