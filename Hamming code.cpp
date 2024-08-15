#include<stdio.h>
#include<math.h>
int main()
{
	int a[20],b[20],r,n,i,j,p;
    printf("Enter the size of data word: ");
    scanf("%d",&n);
    printf("Enter the data word: ");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(r=0;r<n;r++)
	{
	     if(pow(2,r)>=(n+r+1))
	     {
	     	break;
         }
	}
	printf("The number of parity bit : %d",r);
	for(i=0;i<r;i++)
	{
	 p=pow(2,i);
	 printf("\n%d bit position : %d",i+1,p);
	 printf("\n");	
	}
	for(i=1;i<=(r+n);i++)
	b[j];
//	printf("b[p]");
	
return 0;
}
