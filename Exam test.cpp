#include<stdio.h>
#include<string.h>
int main()
{
	char p[20],r[20],n,q;
	int i,j;
	printf("Enter the string: ");
	gets(p);
	n=strlen(p);
//	q=strrev(p);
    for( i=0,j=n-1;i<n,j>=0;i++,j++)
	{
		r[i]=p[j];
	  }
	  int flag=1;
	for(i=0;i<n;i++)
	{
		if (r[i]==p[i])
		{
			flag=0;
		}
		}
		if(flag==0)
		  printf("Palindrome");
		else
		  printf("Not palindrome");      
	return 0;
}
