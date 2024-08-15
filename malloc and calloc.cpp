#include<stdio.h>
#include<stdlib.h>
int main()
{

	int *p,n,m;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Memory not avaliable..");
		exit(1);
	}
	printf("Enter the %d elements: ",n);
	for(int i=0;i<n;i++)
	{
		
		scanf("%d",p+i);
	}
	printf("Enter the no. of new element: ");
	scanf("%d",&m);
	p=(int*)realloc(p,m*sizeof(int));
	printf("Enter the %d new element:",m);
	for(int i=0;i<m;i++)
	    scanf("%d",p+i);
    printf("The elements are: ");
    for(int i=0;i<m;i++)
        printf("%d ",*(p+i));
}
