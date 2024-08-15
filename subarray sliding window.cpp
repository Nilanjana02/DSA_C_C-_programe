#include<stdio.h>
#include<limits.h>
#include<math.h>
//	int max(int mx,int sum);
int main()
{
	int subarray(int k);

	int maxi=subarray(3);
	printf("the maximum sum = %d",maxi);
	
}
int subarray(int k)
{
    int ar[30],sum=0, i, j;
	printf("Enter 6 numbers: ");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&ar[i]);
	}
	int mx=0;
	for(int i=0;i+k<6;i++)
	{
		int sum=0;
		for(int j=i;j<i+k;j++)
		{
			sum=sum+ar[j];
		}
		if(sum>mx)
		{
			mx=sum;
		}
	}
	
return mx;
}

