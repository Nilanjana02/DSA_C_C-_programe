#include <stdio.h>

int main() 
{
    void sum (int n);
    int n;
    //int *p, *q;
    

    printf("Enter the value of n: ");
    scanf("%d",&n);
    //swap(&a,&b);
    sum(n);
    //printf("\n The sum = %d",s);
}

    void sum(int n)
    {
    	int s,r;
	   if(n==0)
	   {
	   	 return ;
	   }
	   else
	   {
	   	printf("%d",n%10);
	   	sum(n/10);
	   }
}

  //  printf("\nAfter swapping a = %d and b = %d", *p, *q);

    


