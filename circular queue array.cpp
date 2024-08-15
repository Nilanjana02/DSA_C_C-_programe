#include<stdio.h>
#include<stdlib.h>
#define max 5
int f=-1;
int r=-1;
int queue[max];
int main()
{
	int x;
	int enqueue(int r);
	int dequeue(int f);
	int return_top(int f);
	void display(int f);
	
	do
	{
		printf("\n\t\t\t1.Enqueue Operation");
		printf("\n\t\t\t2.Dequeue Operation");
		printf("\n\t\t\t3.Return the value of the FRONT element of the queue (without deleting it)");
		printf("\n\t\t\t4.Display the elements of a queue using an array.");
		printf("\n\t\t\t5.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				r=enqueue(r);
				//printf("top=%d",top);
				break;
			case 2:
			    f==dequeue(f);
				break;
			case 3:
			    f=return_top(f);
				break;
			case 4:
			    display(f);
				break;
			case 5:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=5);
}
int enqueue(int r)
{
	int data;
    if(f==((r+1)%max))
	{
		printf("Overflow..");
		return r;
	}
	else
	{
		printf("Enter an element: ");
		scanf("%d",&data);
		if(r==-1)
		{
			r=0;
			f=0;
		}
		else
		{
	       r=(r+1)%max;
	   }
	    queue[r]=data;	
	}
    return r;
}
int dequeue(int f)
{
	int item;
	if(f==-1)
	{
		printf("Operation is underflow..");
		return f;
	}
	else
	{
	item=queue[f];
	printf("The deleted element is : %d",item);
	if(f==r)
	   f=r=-1;
	else
	f=(f+1)%max;
    }
    return f;
}
int return_top(int f)
{
	if(f==-1)
	{
		printf("The queue is empty...");
	}
	else
	{
		printf("The fornt element is : %d",queue[f]);
	}
	return f;
}
void display(int f)
{
	int i=f;
	if(f==-1)
	{
		printf("The queue is empty.....");
	}
	else
	{
		while(i<=r)
		{
			printf("\n%d",queue[i]);
			i=(i+1)%max;
		}
	}
	return ;
}
