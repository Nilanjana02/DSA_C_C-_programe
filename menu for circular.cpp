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
		printf("\n\t\t\t1.Create a circular linked list.");
		printf("\n\t\t\t2.Display the element of the linked list.");
		printf("\n\t\t\t3.Insert a node at the beginning of a circular linked list.");
		printf("\n\t\t\t4.Insert a node at the end of a circular linked list.");
		printf("\n\t\t\t5.Delete a node from the beginning of a circular linked list.");
		printf("\n\t\t\t6.Delete a node from the end of a circular linked list.");
		printf("\n\t\t\t7.Delete a node after a given node of a circular linked list.");
		printf("\n\t\t\t8.Delete the entire circular linked list.");
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
	struct node *ptr,*last;
	last=NULL;
	int k;
	char ch;
	do
	{
		printf("\nEnter an element: ");
		scanf("%d",&k);
		ptr=(struct node*)malloc(sizeof(struct node));
		//start=ptr;
		ptr->data=k;
		if(last==NULL)
		{
	      ptr->next=ptr;
	      
	    }
		else
		{
		
			ptr->next=last->next;
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
   int k;
   struct node *ptr;
   ptr=(struct node*)malloc(sizeof(struct node));
   printf("Enter an element: ");
   scanf("%d",&k);
   ptr->data=k;
   ptr->next=last->next;
   last->next=ptr;
   return last;	
}
struct node* insert_last(struct node *last)
{
	struct node *ptr;
	int k;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr->data=k;
	ptr->next=last->next;
	last->next=ptr;
	last=last->next;
	return last;
}
struct node* delete_beg(struct node *last)
{
	if(last==NULL)
	{
		printf("Underflow..");
	}
	else
	{
	struct node *p;
	p=last->next;
	last->next=p->next;
	printf("The deleted element is %d",p->data);
	free(p);
   }
   return last;
}
struct node* delete_end(struct node *last)
{
	if(last==NULL)
	{
		printf("Underflow..");
	}
	else
	{
	struct node *p,*pre;
	p=last->next;
	pre=p;
	while(pre->next!=last)
	{
		pre=p;
		p=p->next;
	}
	pre->next=last->next;
	last=pre;
	printf("The deleted element is %d",p->data);
	free(p);
   }
   return last;
}
struct node* delete_af_i(struct node *last)
{
	struct node *p,*after;
	int k;
	p=last->next;
	after=p->next;
	printf("Enter the element after which the node will be deleted:  ");
	scanf("%d",&k);
	while(p->data!=k)
	{
		p=after;
		after=after->next;
	}
    p->next=after->next;
	printf("\nThe deleted element is %d ",after->data);
	free(after);
	return last	;
}
struct node* delete_full(struct node *last)
{
	struct node *p,*past;
	p=last->next;
	past=p;
	while(p->next!=last->next)
	{
		past=p->next;
		free(p);
		p=past;
	}
	//free(p);
	last = NULL;
	printf("The entire list is empty.");
	return (last);
}
  	

