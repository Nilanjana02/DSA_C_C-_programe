//Count number of vowels and consonants of a string
#include<stdio.h>
#include<string.h>
int main()
{
	char p[20];
	int i,v=0,c=0;
	printf("Enter a string:");
	scanf("%s",p);
	for(i=0;p[i];i++)
	{
		if((p[i]>=65 && p[i]<=90)||(p[i]>=97  && p[i]<=122))
		{
			if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
			v++;
			else
			c++;
		}
		
	}
	printf("\n The number of vowels = %d",v);
	printf("\n The number of consonants = %d",c);
	return 0;
}
