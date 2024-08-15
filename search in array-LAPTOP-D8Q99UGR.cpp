#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int n,i,search,a[50];
	printf("Enter how many array elements:");
	scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
    	if(a[i]==search)
    	{
    		printf("\n\n%d is found at the position %d",search,i+1);
    		exit(0);
		}
	}
		printf("\n %d is not found in array",search);
	return 0;
}
