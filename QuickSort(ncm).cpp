#include<stdio.h>
int Partition(int a[],int,int);
void QuickSort(int a[],int,int);

int main()
{
	int a[30];
	int lower,upper,i,n;
	printf("Enter how many array elements: \n");
	scanf("%d",&n);
	printf("Enter the array elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	QuickSort(a,0,(n-1));
	printf("Sorted elements");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	return 0;
	
	}
	
	void QuickSort(int a[],int lower,int upper)
	{
		int i;
		
		if(lower<upper)
		{
			i=Partition(a,lower,upper);
			QuickSort(a,lower,i-1);
			QuickSort(a,i+1,upper);
		}
		
		
	}
	int Partition(int a[],int lower,int upper)
	{
		int i,j,item,p,q;
		p=lower;
		q=upper+1;
		item=a[p];
		while(q>=p)
		{
			do
			{
				p=p+1;
			}while(a[p]<item);
			
			do
			{
				q=q-1;
			}while(a[q]>item);
		}
		if(q>p)
		{
			item=a[p];
			a[p]=a[q];
			a[q]=item;
		}
		
	return q;
	}
