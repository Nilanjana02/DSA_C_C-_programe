#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
int main()
{
	int x;
	struct node *start=NULL;
	struct node* create(void);
	void display(struct node *start);
	struct node* insert_beg(struct node *start);
	struct node* insert_last(struct node *start);
	struct node* insert_bf_i(struct node *start);
	struct node* insert_af_i(struct node *start);
    struct node* delete_beg(struct node *start);
	struct node* delete_end(struct node *start);
	struct node* delete_af_i(struct node *start);
	struct node* delete_full(struct node *start);
	
	
	do
	{
		printf("\n\t\t\t1.Create a doubly linked list.");
		printf("\n\t\t\t2.Display the element of the linked list.");
		printf("\n\t\t\t3.Insert a node at the beginning of a doubly linked list.");
		printf("\n\t\t\t4.Insert a node at the end of a doubly linked list.");
		printf("\n\t\t\t5.Insert a node before a given node of a doubly linked list.");
		printf("\n\t\t\t6.Insert a node after a given node of a doubly linked list.");
		printf("\n\t\t\t7.Delete a node from the beginning of a doubly linked list.");
		printf("\n\t\t\t8.Delete a node from the end of a doubly linked list.");
		printf("\n\t\t\t9.Delete a node after a given node of a doubly linked list.");
		printf("\n\t\t\t10.Delete the entire doubly linked list.");
		printf("\n\t\t\t11.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				start = create();
				break;
			case 2:
			    display(start);
				break;
			case 3:
			    start=insert_beg(start);
				break;
			case 4:
			    start=insert_last(start);
				break;
			case 5:
			    start=insert_bf_i(start);
				break;
			case 6:
			    start=insert_af_i(start);
				break;
			case 7:
			    start=delete_beg(start);
				break;		
			case 8:
			    start=delete_end(start);
				break;
			case 9:
			    start=delete_af_i(start);
			    break;
			case 10:
			    start=delete_full(start);
				break; 						
			case 11:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=11);
}
struct node* create(void)
{
   struct node *start=NULL,*p,*ptr;
   int k;
   char ch;
   do
   {
   	    printf("Enter an element: ");
   	    scanf("%d",&k);
   	    ptr=(struct node *)malloc(sizeof(struct node));
   	    ptr->data=k;
   	    if(start==NULL)
   	    {
   	    	ptr->prev=NULL;
   	    	ptr->next=NULL;
   	    	start=ptr;
   	    	p=start;
		}
		else
		{
			ptr->prev=p;
			ptr->next=NULL;
			p->next=ptr;
			p=p->next;
		}
		printf("Do you want to enter any more element(y/n): ");
		fflush(stdin);
		scanf("%c",&ch);
    }while(ch=='y');
	return (start);	  	
}
void display(struct node *start)
{
	struct node *p;
	p=start;
	if(start==NULL)
	{
		printf("The list is empty...");
		return ;
	}
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("end");
return ;
}
struct node* insert_beg(struct node *start)
{
	struct node *ptr;
	int k;
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=k;
	ptr->prev=NULL;
	if(start==NULL)
	{
		ptr->next=NULL;
	}
	else
	{
	ptr->next=start;
	start->prev=ptr;
    }
	start=ptr;
	return (start);	
}
struct node* insert_last(struct node *start)
{
	struct node *p,*ptr;
	int k;
	p=start;
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr=(struct node *)malloc(sizeof(struct node));
	while(p->next!=NULL)
	{
		p=p->next;
	}
	ptr->data=k;
	ptr->next=NULL;
	ptr->prev=p;
	p->next=ptr;
	return (start);
}
struct node* insert_bf_i(struct node *start)
{
	struct node *p,*ptr,*q;
	int k,item;
	p=start;
	printf("Enter the element before which you want to enter the node: ");
	scanf("%d",&item);
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr->data=k;
	while(p->data!=item)
	{
		q=p;
		p=p->next;
	}
	ptr->next=p;
	ptr->prev=q;
	p->prev=ptr;
	q->next=ptr;
	return start;
}
struct node* insert_af_i(struct node *start)
{
    struct node *p,*ptr,*q;
	int k,item;
	p=start;
	printf("Enter the element after which you want to enter the node: ");
	scanf("%d",&item);
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr->data=k;
	while(p->data!=item)
	{
		p=p->next;
	}
	if(p->next==NULL)
	{
		ptr->next=NULL;
		ptr->prev=p;
		p->next=ptr;
	}
	else
	{
	q=p->next;
	ptr->prev=p->next;
	ptr->next=q;
	p->next=ptr;
	q->prev=ptr;
    }     
	return start;	
}
struct node* delete_beg(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty..");
	}
	else if(start->next==NULL)
	{
	   p=start;
	   start=NULL;	
	}
	else
	{
	    p=start;
     	start=start->next;
	    start->prev=NULL;
	}
    free(p);
	return(start);
}
struct node* delete_end(struct node *start)
{
	struct node *p,*q;
	p=start;
	if(start==NULL)
	{
		printf("List is empty..");
	}
	else if(start->next==NULL)
	{
	   p=start;
	   start=NULL;	
	}
	else
	{
	   while(p->next!=NULL)
	   {
	   	q=p;
	   	p=p->next;
	   }
	   q->next=NULL;
	   free(p);
       return (start);
   }
}
struct node* delete_af_i(struct node *start)
{
	struct node *ptr,*p;
	ptr=start;
	p=start;
	int item;
	printf("Enter the element after which you want to delete the node: ");
	scanf("%d",&item);
	while(ptr->data!=item)
	{
		ptr=ptr->next;
	}
	p=ptr->next;
	ptr->next=p->next;
	p->next->prev=ptr;
	free(p);
	//	ptr=NULL;
	return (start);
}
struct node* delete_full(struct node *start)
{
   struct node *ptr,*p;
   ptr=start;
   p=ptr;
   while(ptr->next!=NULL)
   {
   	   p=ptr;
   	   free(p);
   	   ptr=ptr->next;
    }
	free(ptr);
	start=NULL;
	printf("\nThe entire list is deleted..");
	return(start);	
}




