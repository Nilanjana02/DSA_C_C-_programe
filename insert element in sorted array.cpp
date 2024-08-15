#include<stdio.h>
int main()
{
	int a[50],n,item,i=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter sorted element: ");
	for(int j=1;j<=n;j++)
	{
	  scanf("%d",&a[j]);	
	}
	printf("Enter the element: ");
	scanf("%d",&item);
	int k=n;
	//n=n+1;

	while(item>a[i])
	{
	i++;
	}
	int index=i;
	printf("%d",i);
/*	int s=n+1;
	if(index>n)
	{
	for(int p=n;p<=index;p--)
	{
		a[s]=a[p];
	}
}
	a[i]=item;
	printf("Elements are: ");
	for(int i=1;i<=s;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;*/
	
}
