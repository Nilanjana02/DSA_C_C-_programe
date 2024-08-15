#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *last=NULL;
	int x;
	struct node* create(struct node *last);
	void display(struct node *last);
	
	do
	{
		printf("\n\t\t\t1.Create a circular linked list.");
		printf("\n\t\t\t2.Display the element of the linked list.");
		printf("\n\t\t\t9.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				last = create(last);
				break;
			case 2:
			    display(last);
				break;	
			case 9:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=9);
}
struct node* create(struct node *last)
{
	struct node *ptr,*start;
	int k;
	char ch;
	do
	{
		printf("\nEnter an element: ");
		scanf("%d",&k);
		ptr=(struct node*)malloc(sizeof(struct node));
		start=ptr;
		if(last==NULL)
		{
		ptr->data=k;
		ptr->next=ptr;
	    }
		else
		{
			ptr->data=k;
			ptr->next=start;
			last->next=ptr;
	    }
		last=ptr;
		printf("\nDo you want to enter more element(y/n): ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y');
	return last;
	
}
void display(struct node *last)
{
	struct node *start;
	start=last->next;
	do
	{
		printf("%d->",start->data);
		start=start->next;
	}while(last->next!=last);
	return;
}
  	

