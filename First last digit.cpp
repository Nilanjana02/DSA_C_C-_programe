#include<stdio.h>
int main()
{
	long int n;
	int first,last,rem,temp;
	printf("Enter the number : ");
	scanf("%ld",&n);
	first=n;
	last = n%10;
	while(first>=10)
	{
		first=first/10;
	}
	printf("\nThe first digit of the number is %d",first);
	printf("\nThe last digit of the number is %d\n",last);
	
	temp=first;
	first = last;
	last=temp;
	printf("\n After swaping the first digit of the number is %d",first);
	printf("\nAfter swaping the last digit of the number is %d",last);
	
    return 0;
}
