//Sorting in array
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[50],i,j,n,small;
	printf("Enter how many array element:");
	scanf("%d",&n);
	printf("Enter the array element:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j]) 
		{
		  small=a[i];
		  a[i]=a[j];
		  a[j]=small;
	    }
    } 
printf("\n %d",a[i]);
}
return 0;
}
