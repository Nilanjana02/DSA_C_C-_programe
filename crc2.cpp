#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N strlen(g)

      char t[28],cs[28],g[]="1011";
      int a,e,c;
      void xorfunction()
       {
          for(c=1;c<N;c++)
                  cs[c]=((cs[c]==g[c])? '0':'1');
       }
      
      void crc()
        {
           for(e=0;e<N;e++)
                cs[e]=t[e];
            do
                {
	     if(cs[0]=='1');
		xorfunction();
  	     for(c=0;c<N-1;c++)
             		cs[c]=cs[c+1];
	     cs[c]=t[e++];
    	}while(e<=a+N-1);
        } 
       
     int main()
   {
printf("\nEnter data :: ");
scanf("%s",t);
printf("\n____________");
printf("\nGenerating  polynomial :: %s",g);
a=strlen(t);
for(e=a;e<a+N-1;e++)
          t[e]='0';
printf("\nAppended data is :: %s",t);
printf("\n____________");
crc();
printf("\nCRC is :: %s",cs);
for(e=a;e<a+N-1;e++)
          t[e]=cs[e-a];
printf("\n____________");
printf("\nFinal data to be sent :: %s",t);
printf("\n____________");
printf("\nTest error detection 0(yes) 1(no)? ::  ");
scanf("%d",&e);
if(e==0)
{
do
{
printf("\nEnter the position where error is to be inserted :: ");
scanf("%d",&e);
}while(e==0 || e<a+N-1);

t[e-1]=(t[e-1]=='0')?  '1':'0';
printf("\n____________");
printf("\nErroneous  data  ::  %s\n",t);
}
crc();
for(e=0;(e<N-1)  && (cs[e]!='1');e++)
if(e<N-1)
printf("\nError detected\n\n");
else
printf("\nNo error detected\n\n");
printf("\n____________");

return  0;
      }
