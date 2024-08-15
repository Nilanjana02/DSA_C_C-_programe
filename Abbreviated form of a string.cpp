//Display the abbreviated form of a string
#include<stdio.h>
#include<string.h>
int main()
{
	char p[50];
	int len,i,s;
	printf("Enter a name: ");
	gets(p);
	len=strlen(p);
	printf("%c.",p[0]);
	for(i=0;i<len;i++)
	{
		if(p[i]==' ')
		s=i;
	}
	for(i=0;i<s;i++)
	{
		if(p[i]==' ')
		printf("%c.",p[i+1]);
	}
	for(i=s+1;i<len;i++)
	{
		printf("%c",p[i]);
	}
	return 0;
}
