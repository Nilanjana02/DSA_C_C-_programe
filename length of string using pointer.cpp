#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	char *p,*q;
	printf("Enter the 1st string: ");
	gets(a);
	printf("Enter the 2nd string: ");
	gets(b);
	int k=strlen(a);
	p=&a[0];
	q=&b[0];
	int i=0;
	printf("\n New array : ");
	while(*p!='\0')
	{
		printf("%c",*p);
	    p++; 
}
    p=q;
    while(*p!='\0')
    {
    	printf("%c",*p);
    	p++;
	}
	printf("\nLength = %d",i);
	printf("\nlenght wising fun: %d",k);
	
	
}
