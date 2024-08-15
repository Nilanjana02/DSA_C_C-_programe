#include<stdio.h>
#include<stdlib.h>
#define max 6
int top=-1;
int stack[max];
int main()
{
	int x;
	int push_st(int top);
	int pop_st(int top);
	int return_top(int top);
	void display(int top);
	
	do
	{
		printf("\n\t\t\t1.Push Operation.");
		printf("\n\t\t\t2.Pop Operation");
		printf("\n\t\t\t3.Return the topmost element(without deleting");
		printf("\n\t\t\t4.Display the elements of a stack using an array.");
		printf("\n\t\t\t5.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				top=push_st(top);
				//printf("top=%d",top);
				break;
			case 2:
			    top=pop_st(top);
				break;
			case 3:
			    top=return_top(top);
				break;
			case 4:
			    display(top);
				break;
			case 5:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=5);
}
int push_st(int top)
{
	int data;
    if(top>=max-1)
	{
		printf("Overflow..");
		return top;
	}
	else
	{
	   printf("Enter an element: ");
	   scanf("%d",&data);
	   top=top+1;
	   stack[top]=data;	
	}
    return top ;
}
int pop_st(int top)
{
	int item;
	if(top==-1)
	{
		printf("Operation is underflow..");
		return top;
	}
	else
	{
	item=stack[top];
	printf("The pop element is : %d",item);
	top--;
    }
    return top;
}
int return_top(int top)
{
	if(top==-1)
	{
		printf("The operation is in underflow..");
	}
	else
	{
		printf("The topmost element is : %d",stack[top]);
	}
	return top;
}
void display(int top)
{
	int i=top;
	if(i==-1)
	{
		printf("The operation is in underflow..");
	}
	else
	{
		while(i!=-1)
		{
			printf("\n%d",stack[i]);
			i--;
		}
	}
	return ;
}
