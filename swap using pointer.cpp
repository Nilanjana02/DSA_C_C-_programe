#include <stdio.h>

int main() 
{
    int sum (int n);
    int n;
    //int *p, *q;
    

    printf("Enter the value of n: ");
    scanf("%d",&n);
    //swap(&a,&b);
    int s=sum(n);
    printf("\n The sum = %d",s);
}

    int sum(int n)
    {
    	int s=0,r;
	   if(n!=0)
	   {
	   	 r=n/10;
	   	 s=s+r;
	   }
	   return(sum(n/10));
}

  //  printf("\nAfter swapping a = %d and b = %d", *p, *q);

    


