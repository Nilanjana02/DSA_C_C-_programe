#include<stdio.h>
int main()
{
	void tower(int n,char beg,char aux,char end);
	int n;
	char a,b,c;//name of the pole
	printf("Enter the number of disc: ");
	scanf("%d",&n);
	printf("The solution of tower of Hanoi of %d disc is:",n);
	tower(n,'a','b','c');
}
void tower(int n,char beg,char aux,char end)
{
	if(n<=0)
	{
		printf("Plese enter the valid number of disc..");
	}
	else if(n==1)
	{
		printf("\n Move the disc from %c to %c.",beg,end);
	}
	else
	{
		tower(n-1,beg,end,aux);
		tower(1,beg,aux,end);
		tower(n-1,aux,beg,end);
	}
}
