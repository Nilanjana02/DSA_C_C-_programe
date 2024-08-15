#include<stdio.h>
int main(int argc, char* argv[])
{

	printf("Name of the program = %s\n",argv[0]);
	printf(" The number of argument = %d\n",argc);
	if(argc>1)
	{
		printf("The first command line argument=%s\n",argv[1]);
	}
	if(argc>2)
	{
		printf("The second command line argument = %s\n",argv[2]);
	}
	return 0;
}
