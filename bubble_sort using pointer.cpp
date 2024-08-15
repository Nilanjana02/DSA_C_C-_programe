#include<stdio.h>
int main()
{
	void bubble(int a[60],int n);
	int a[60],n,i;
	printf("Enter the no. of array elements: ");
	scanf("%d",&n);
	printf("Enter the %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	bubble(a,i);

}
void bubble(int *array,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(array+j)>*(array+(j+1)))
			{
			int temp;
			temp=*(array+j);
			*(array+j)=*(array+(j+1));
			*(array+(j+1))=temp;	
			}
			
		}
	}
		printf("\n After bubble sort the array elements are : ");
	for(int i=0;i<n;i++)
    {
    	printf("%d ",*(array+i));
	}
	return;
	
}
