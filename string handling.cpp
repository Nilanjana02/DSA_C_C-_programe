#include<stdio.h>
#include<ctype.h>
int main()
{
	char p;
	printf("Enter an alphabet");
	p=getchar();
	if(isalpha(p))
	printf("\n It is an alphabet");
	else if(isdigit(p))
	printf("\n It is a digit");
	else if(isspace(p))
	printf("\n It is a space");
	else
	printf("\n It is a special character");
return 0;	
}
