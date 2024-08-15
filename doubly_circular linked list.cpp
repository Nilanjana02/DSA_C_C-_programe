#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
int main()
{
	struct node *last=NULL;
	int x;
	struct node* create(void);
	void display(struct node *last);
	struct node* insert_beg(struct node *last);
	struct node* insert_last(struct node *last);
	struct node* delete_beg(struct node *last);
	struct node* delete_end(struct node *last);
	struct node* delete_af_i(struct node *last);
	struct node* delete_full(struct node *last);
	
	
	do
	{
		printf("\n\t\t\t1.Create a circular doubly linked list.");
		printf("\n\t\t\t2.Display the elements of a circular doubly linked list.");
		printf("\n\t\t\t3.Insert a node at the beginning of a circular doubly linked list.");
		printf("\n\t\t\t4.Insert a node at the end of a circular doubly linked list.");
		printf("\n\t\t\t5.Delete a node from the beginning of a circular doubly linked list.");
		printf("\n\t\t\t6.Delete a node from the end of a circular doubly linked list.");
		printf("\n\t\t\t7.Delete a node after a given node of a circular doubly linked list.");
		printf("\n\t\t\t8.Delete the entire circular doubly linked list.");
		printf("\n\t\t\t9.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				last = create();
				break;
			case 2:
			    display(last);
				break;
			case 3:
			    last=insert_beg(last);
				break;
			case 4:
			    last=insert_last(last);
				break;
			case 5:
			    last=delete_beg(last);
				break;
			case 6:
			    last=delete_end(last);
				break;
			case 7:
			    last=delete_af_i(last);
			    break;
			case 8:
			    last=delete_full(last);
				break; 						
			case 9:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=9);
}
struct node* create(void)
{
	struct node *start,*last,*ptr;
	int k;
	char ch;
	last=NULL;
	start=NULL;
	do
	{
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&k);
	if(last==NULL)
	{
		ptr->data=k;
		ptr->next=ptr;
		ptr->prev=ptr;
		last=ptr;
		start=ptr;
	}
	else
	{
		ptr->data=k;
		ptr->next=start;
		ptr->prev=last;
		last->next=ptr;
		last=ptr;		
	}
	printf("Do you want to enter any more(y/n): ");
	fflush(stdin);
	scanf("%c",&ch);
    }while(ch=='y');
    return last;
}
void display(struct node *last)
{
	struct node *start;
	if(last==NULL)
	{
		printf("Nothing to print..list empty..");
		return;
	}
	start=last->next;
	do
	{
		printf("%d->",start->data);
		start=start->next;
	}while(start!=last->next);
	printf("end");
	return;
}
struct node* insert_beg(struct node *last)
{
	struct node *start,*ptr;
	int k;
	start=last->next;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr->data=k;
	ptr->prev=last;
	last->next=ptr;
	start->prev=ptr;
	ptr->next=start; 
	return last;
}
struct node* insert_last(struct node *last)
{
	struct node *ptr;
	int k;
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=k;
	ptr->prev=last;
	ptr->next=last->next;
	last->next=ptr;
	last=ptr;
	return (last);
}
struct node* delete_beg(struct node *last)
{
	struct node *start;
	start=last->next;
	if(last==NULL)
	{
		printf("The operation is in underflow..");
		return (last);
	}

	if(last->next==last)
	{
		free(start);
		last=NULL;
	}
	else
	{
	   last->next=start->next;
	   start->next->prev=last;
	   free(start);
    }   
	return last;
}
struct node* delete_end(struct node *last)
{
	struct node *start;
	start=last;
	if(last==NULL)
	{
		printf("The operation is in underflow..");
		return (last);
	}
	if(last->next==last)
	{
		free(start);
		last=NULL;
	}
	else
	{
		last->prev->next=last->next;
		last->next->prev=last->prev;
		last=last->prev;
		free(start);
	}
	return (last);
}
struct node* delete_af_i(struct node *last)
{
	struct node *after,*ptr;
	int k;
	ptr=last->next;
	printf("Enter the element after which you want to delete the list: ");
	scanf("%d",&k);
	while(ptr->data!=k)
	{
		ptr=ptr->next;
	}
	after=ptr->next;
	if(after==last)
	{
		ptr->next=last->next;
		last->next->prev=ptr;
		last=ptr;
		free(after);
		return (last);
	}
	else
	{
		ptr->next=after->next;
		after->next=ptr;
		free(after);
		return (last);
	}		
}
struct node* delete_full(struct node *last)
{
	struct node *start,*ptr;
	start=last->next;
	ptr=start;
	while(ptr->next!=last->next)
	{
		start=ptr;
		free(start);
		ptr=ptr->next;
	}
	free(ptr);
	last=NULL;
	printf("The entire list is deleted");
	return (last);
}
