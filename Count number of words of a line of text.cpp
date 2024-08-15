//Count the number of words in a line of text
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char p[100];
	int n,i,s=0,w,d=0,spl=0;
	printf("Enter a line:");
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
	if(isspace(p[i]))
	s++;
}
w=s+1;
printf("\nThe number of words in this line is %d",w);
	return 0;
}
