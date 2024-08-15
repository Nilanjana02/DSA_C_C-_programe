#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define N strlen(p)
#define M strlen(q)
#define X strlen(h)

char t[28],cs[28];
char p[]="1100000001111",q[]="11000000000000101",h[]="1000100000010001";
int a,e,c;

void xorfunctionf()
{
	for(c=1;c<N;c++)
	cs[c]=((cs[c]==p[c])?'0':'1');

}
void xorfunctions()
{
	for(c=1;c<N;c++)
	cs[c]=((cs[c]==q[c])?'0':'1');

}
void xorfunctiont()
{
	for(c=1;c<N;c++)
	cs[c]=((cs[c]==h[c])?'0':'1');

}
void crcf()
{
	int ch;
	printf("\n Enter the data : ");
	scanf("%s",t);
	printf("\n");
	printf("\n Generator polinomial : %s",p);
	a=strlen(t);
	for(e=a;e<a+N-1;e++)
	t[e]='0';
	printf("\n");
	printf("\nThe append data is:%s",t);
	printf("\n");
	for(e=0;e<N;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctionf();
		for(c=0;c<N-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+N-1);
		printf("\nCRC is : %s",cs);
	for(e=a;e<a+N-1;e++)
	t[e]=cs[e-a];
	printf("\n");
	printf("\n Final data to be sent: %s",t);
	printf("\n");
	printf("\nTest error detection 0(yes) 1(no)?: ");
	scanf("%d",&e);
	if(e==0)
	{
		do
		{
			printf("\n Enter the position where error is to be inserted : ");
			scanf("%d",&e);	
		}while(e==0||e>a+N-1);
		t[e-1]=(t[e-1]=='0')?'1':'0';
		printf("\n");
		printf("\n Erroneous data : %s\n",t);
	}
	for(e=0;e<N;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctionf();
		for(c=0;c<N-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+N-1);
	for(e=0;(e<N-1)&&(cs[e]!='1');e++);
	if(e<N-1)
	printf("\nError detected\n\n");
	else
	printf("\nNo error detected\n\n");
	printf("\n..........................\n");
}
void crcs()
{
	int ch;
	printf("\n Enter the data : ");
	scanf("%s",t);
	printf("\n");
	printf("\n Generator polinomial : %s",q);
	a=strlen(t);
	for(e=a;e<a+M-1;e++)
	t[e]='0';
	printf("\n");
	printf("\nThe append data is:%s",t);
	printf("\n");
	for(e=0;e<M;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctions();
		for(c=0;c<M-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+M-1);
		printf("\nCRC is : %s",cs);
	for(e=a;e<a+M-1;e++)
	t[e]=cs[e-a];
	printf("\n");
	printf("\n Final data to be sent: %s",t);
	printf("\n");
	printf("\nTest error detection 0(yes) 1(no)?: ");
	scanf("%d",&e);
	if(e==0)
	{
		do
		{
			printf("\n Enter the position where error is to be inserted : ");
			scanf("%d",&e);	
		}while(e==0||e>a+M-1);
		t[e-1]=(t[e-1]=='0')?'1':'0';
		printf("\n");
		printf("\n Erroneous data : %s\n",t);
	}
	for(e=0;e<M;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctions();
		for(c=0;c<M-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+M-1);
	for(e=0;(e<M-1)&&(cs[e]!='1');e++);
	if(e<M-1)
	printf("\nError detected\n\n");
	else
	printf("\nNo error detected\n\n");
	printf("\n..........................\n");
}
void crct()
{
	int ch;
	printf("\n Enter the data : ");
	scanf("%s",t);
	printf("\n");
	printf("\n Generator polinomial : %s",h);
	a=strlen(t);
	for(e=a;e<a+X-1;e++)
	t[e]='0';
	printf("\n");
	printf("\nThe append data is:%s",t);
	printf("\n");
	for(e=0;e<X;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctiont();
		for(c=0;c<X-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+X-1);
		printf("\nCRC is : %s",cs);
	for(e=a;e<a+X-1;e++)
	t[e]=cs[e-a];
	printf("\n");
	printf("\n Final data to be sent: %s",t);
	printf("\n");
	printf("\nTest error detection 0(yes) 1(no)?: ");
	scanf("%d",&e);
	if(e==0)
	{
		do
		{
			printf("\n Enter the position where error is to be inserted : ");
			scanf("%d",&e);	
		}while(e==0||e>a+X-1);
		t[e-1]=(t[e-1]=='0')?'1':'0';
		printf("\n");
		printf("\n Erroneous data : %s\n",t);
	}
	for(e=0;e<X;e++)
	cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		xorfunctiont();
		for(c=0;c<X-1;c++)
		cs[c]=cs[c+1];
		cs[c]=t[e++];
	}while(e<=a+X-1);
	for(e=0;(e<X-1)&&(cs[e]!='1');e++);
	if(e<X-1)
	printf("\nError detected\n\n");
	else
	printf("\nNo error detected\n\n");
	printf("\n..........................\n");
}
int main()
{
	int ch=0;
	while(ch!=5)
	{
		printf("\n1.CRC12\n2.CRC16\n3.CRC32\n4.Quit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			crcf();
			break;
			case 2:
			crcs();
			break;
			case 3:
			crct();
			break;
			case 4:
			exit(0);
			break;
			default:
				printf("\nEnter the valid choice....\n");
		}
	}
	return 0;
}


