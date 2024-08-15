#include<stdio.h>
int main()
{
	void modify(int *p,int n);
	int a[50],n;
	printf("Enter the no. of array elements: ");
	scanf("%d",&n);
	printf("Enter the %d array elements: ",n);
	for(int i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
    printf("The array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    modify(a,n);    
}
void modify(int *p,int n)
{
	printf("\nThe modify array is: ");
	for(int i=0;i<n;i++)
	{
		int s=*(p+i)+10;
		printf("%d ",s);
	}
}
