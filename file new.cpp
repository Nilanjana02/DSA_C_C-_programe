#include<stdio.h>
#define max 100
int main()
{
	char file_n[max];
	FILE *fp;
	int c=0;
	char c1;
	printf("Enter the file name: ");
	scanf("%s",file_n);
	fp=fopen(file_n,"r");
	if(fp==NULL)
	{
		printf("Not open");
		return 0;
	}
	for(c1=getc(fp);c!=EOF;c1=getc(fp))
	{
		if(c1=='\n')
		{
			c++;
		}
	}
	fclose(fp);
	printf("the line + %d",c);
	return 0;
}
