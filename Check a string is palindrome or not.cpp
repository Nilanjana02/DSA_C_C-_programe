//Example check a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char p[20],r[20];
	int n,i,j;
	printf("Enter a string");
	gets(p);
	n=strlen(p);
	for(i=0,j=n-1;j>=0;i++,j--)
	{
		r[i]=p[j];
	}
	r[i]='\0';
	if(strcmpi(p,r)==0)
	printf("\n The given string is palindrome");
	else
	printf("\nThe given string is not palindrome");
	return 0;
}
