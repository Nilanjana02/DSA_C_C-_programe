#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n,k,i,r,p,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    k=n;
    p=n;
    i=0;
    while(k!=0)
    {
	    k=k/10;
	    i++;
    }
    while(p!=0)
    {
	    r=p%10;
	    s=s+pow(r,i);
	    p=p/10;
    }
    if(n==s)
    printf(" %d is an armstrong number.",n);
    else
    printf(" %d is not an armstrong number.",n);
    return 0;
}
