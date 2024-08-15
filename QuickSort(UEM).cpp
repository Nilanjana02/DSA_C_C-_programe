#include<stdio.h>
void quicksort(int arr[],int s,int e);
int partition(int arr[],int s,int e);
int main()
{
	int n,arr[10];
	printf("Enter the total number of element: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int s= 0,e=n-1;
	quicksort(arr,s,e);
	for(int i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void quicksort(int arr[],int s,int e)
{
	//base case
	if(s>=e)
	{
		return;
	}
	int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
     
}
int partition(int arr[],int s,int e)
{
	int pivot = arr[s];
	int c=0;
	for(int i=s+1;i<=e;i++)
	{
		if(arr[i]<=pivot)
		{
			c++;
		}
	}
	int pivotIndex = s+c;
	int temp = arr[pivotIndex];
	arr[pivotIndex] = arr[s];
	arr[s] = temp;
	int i=s,j=e;
	while(i<pivotIndex && j>pivotIndex)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<pivotIndex && j>pivotIndex)
		{
			int temp = arr[i++];
			arr[i++]=arr[j--];
			arr[j--] = temp;
		}
	}
	return pivotIndex;
}
