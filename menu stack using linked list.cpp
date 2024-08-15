#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
int main()
{
	int x;
	struct stack *top=NULL;
	struct stack* push_st(struct stack *top);
	struct stack* pop_st(struct stack *top);
	struct stack* return_top(struct stack *top);
	void display(struct stack *top);
	
	do
	{
		printf("\n\t\t\t1.Push Operation.");
		printf("\n\t\t\t2.Pop Operation");
		printf("\n\t\t\t3.Return the topmost element(without deleting");
		printf("\n\t\t\t4.Display the elements of a stack using linked list.");
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
struct stack* push_st(struct stack *top)
{
	int k;
	printf("Enter an element: ");
	scanf("%d",&k);
	struct stack *ptr;
	ptr=(struct stack*)malloc(sizeof(struct stack));
	ptr->data=k;
	ptr->next=top;
	top=ptr;
	return top;
}
struct stack* pop_st(struct stack *top)
{
	struct stack *p;
	p=top;
	if(top==NULL)
	{
		printf("Underflow..");
	}
	else
	{
		printf("The poped element is: %d",top->data);
		top=top->next;
		free(p);
	}
	return top;
}
struct stack* return_top(struct stack *top)
{
	if(top==NULL)
	{
		printf("Underflow.......");
	}
	else
	{
		printf("The topmost element is : %d",top->data);
	}
	return top;
}
void display(struct stack *top)
{
	//struct stack *ptr;
	if(top==NULL)
	{
		printf("Underflow.......");
	}
	else
	{
		while(top!=NULL)
		{
		    printf("\n%d",top->data);
		    top=top->next;   
	    }
	}
	return ;
}


