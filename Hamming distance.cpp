#include<stdio.h>
int main ()
{
	int a[20],b[20],c,i,j,n;
	printf("Enter the size of the data word: ");
	scanf("%d",&n);
	printf("Enter the 1st data word: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the 2nd data word: ");
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	c=0;
	for(i=0;i<n;i++)
	{
		j=i;
		if(a[i]!=b[j])
		{
			c++;
		}
	}
	printf("The hamming distance between two data word is : %d",c);
	return 0;
	
}
