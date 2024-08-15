#include<stdio.h>
#include<conio.h>
int n;
int main()
{
	void get_array(int a[]);
	void print_even(int a[]);
	void print_odd(int a[]);
	void sum_avg(int a[]);
	void min_max(int a[]);
	void reverse(int a[]);
	int a[20],ch;
	do
	{
	 printf("\n1. Enter array");
	 printf("\n2. Print even_valued element");
	 printf("\n3. Print odd_valued element");
	 printf("\n4. Print sum and avarage of array");
	 printf("\n5. Minimum and maximum element of array");
	 printf("\n6. Print the array in reverse order");
	 printf("\n7. Quit");
	 printf("\n\n\n Enter your choice");
	 scanf("%d",&ch);
	// do
//	{
	switch(ch)
	{
		case 1:
			get_array(a);
			break;
        case 2:
        	print_even(a);
        	break;
        case 3:
        	print_odd(a);
        	break;
        case 4:
        	sum_avg(a);
        	break;
        case 5:
        	min_max(a);
        	break;
        case 6:
        	reverse(a);
        	break;
        case 7:
        	break;
        default:
        	printf("Wrong choice.....");
	}	
}while(ch!=7);
return 0;
}
void get_array(int a[])
{
	int i;
	printf("Enter how many array element:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	return;
}
void print_even(int a[])
{
	int i,n;
	printf("The even_valued elements are");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("\t%d",a[i]);
	}
	getch();
	return;
}
void print_odd(int a[])
{
	int i;
	printf("The odd_valued elements are");
	for(i=0;i<n;i++)
	if(a[i]%2!=0)
	printf("\t%d",a[i]);
	getch();
}
void sum_avg(int a[])
{
	int s=0,i;
	float avg;
	for(i=0;i<n;i++)
	s=s+a[i];
	avg=(float)s/n;
	printf("Sum = %d",s);
	printf("Average = %d",avg);
	getch();
	return;
}
void min_max(int a[])
{
	int i,min,max;
	min=max=a[0];
	for(i=0;i,n;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	printf("Minimum value = %d",min);
	printf("Maximum value = %d",max);
	getch();
	return;
}
void reverse(int a[])
{
	int i,j,temp;
	printf("Reverse form of array is");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		printf("%d",a[i]);
	}
	getch();
	return;
}
