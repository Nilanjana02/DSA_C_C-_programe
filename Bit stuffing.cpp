#include<stdio.h>
#include<string.h>
int main()
{
	int a[20],b[20],i,j,c,n,k;
	printf("Enter the size of data: ");
	scanf("%d",&n);
	printf("Enter the data : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	c=1;
	j=0;
	while(i<n)
	{
		if(a[i]==1)
		{
			b[j]=a[i];
			for(k=i+1;a[k]==1 && k<n && c<5;k++)
			{
				j++;
				b[j]=a[k];
				c++;
				if(c==5)
				{
					j++;
					b[j]=0;	
				}
				i=k;
			}
		}
		else
		{
		b[j]=a[i];
	}
		i++;
		j++;	
		}
	
	printf("After bit stuffing the sending data is: ");
	for(i=0;i<j;i++)
	printf("%d",b[i]);
	return 0;
}

