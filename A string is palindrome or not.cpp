#include<stdio.h>
#include<string.h>
int main()
{
	char p[20];
	int i,n;
	printf("Enter a string:");
	scanf("%s",p);
	n=strlen(p);
	for(i=0;i=n/2;i++)
	{
		if(p[i]!=p[n-i+1])
		{
		printf("\n Not palindrome");
		break;
		}
	}
		if(i==n/2)
		printf("\n palindrome");
	return 0;
}

