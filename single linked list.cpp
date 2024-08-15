#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main()
{
	struct node* create_list(void);
	void display(struct node *start);
	struct node* insert_f(struct node *start);
	void insert_last(struct node *start);
	struct node* insert_bf_i(struct node *start);
	void insert_af_i(struct node *start);
	struct node* delete_f(struct node *start);
	void delete_last(struct node *start);
	void delete_af_i(struct node *start);
	void delete_list(struct node *start);
	struct node* delete_full(struct node *start);
	int s;
	struct node *start;
	do
	{
		printf("\n\t\t\t1.create a single linked list.");
		printf("\n\t\t\t2.Display the elements of a single linked list.");
		printf("\n\t\t\t3.Insert node at the beginning.");
		printf("\n\t\t\t4.Insert node at the end.");
		printf("\n\t\t\t5.Insert a node before a given node.");
		printf("\n\t\t\t6.Insert a node after a given node.");
		printf("\n\t\t\t7.Delete node from the beginning.");
		printf("\n\t\t\t8.Delete a node from the end.");
		printf("\n\t\t\t9.Delete a node after a given node.");
		printf("\n\t\t\t10.Delete the entire single linked list.");
		printf("\n\t\t\t11.Exit.");
		printf("\n\n\t\t\tEnter your choice: ");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				start=create_list();
				break;
			case 2:
				display(start);
				break;
			case 3:
				start=insert_f(start);	
				break;
			case 4:
				insert_last(start);
				break;
			case 5:
				start=insert_bf_i(start);
				break;
			case 6:
			    insert_af_i(start);	
			    break;
			case 7:
				start=delete_f(start);
				break;
			case 8:
			    delete_last(start);
			    break;
			case 9:
				delete_af_i(start);
				break;
			case 10:
				start=delete_full(start);
				break;
			case 11:
			    break;
			default:
			    printf("\nYou entered wrong choice.....");
								
		}
	}while(s!=11);

}
struct node* create_list(void)
{
	struct node *start,*ptr,*p;
	start=NULL;
	int k,s;
	char ch;
	do
	{
		printf("Enter an element: ");
		scanf("%d",&k);
	    ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=k;
		ptr->next=NULL;
		
		if(start==NULL)
		   start=ptr;
		else
	    	p->next=ptr;
	    p=ptr;
	    printf("Do you want to enter another element(y/n): ");
	    fflush(stdin);
		scanf("%c",&ch) ;	
	}while(ch=='y');
	return (start);
}
void display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("END");
	return ;
}
	struct node* insert_f(struct node *start)
	{
		struct node *ptr;
		int n;
		printf("\nEnter the element for the inserting node at the beginning: ");
		scanf("%d",&n);
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=n;
		ptr->next=start;
		start=ptr;
		return(start);
		
	}
	void insert_last(struct node *start)
	{
		struct node *ptr,*q;
		int k;
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		printf("Enter an element for the inserting node at the last: ");
		scanf("%d",&k);
		q=(struct node *)malloc(sizeof(struct node));
		q->data=k;
		q->next=NULL;
		ptr->next=q;
		display(start);
		return;
	}
	struct node* insert_bf_i(struct node *start)
	{
		struct node *ptr,*pre,*q;
		int k,a;
		ptr=start;
		pre=ptr;
		printf("\nEnter the element ,before which you want to enter the node:");
		scanf("%d",&k);
		while(ptr->data!=k)
		{
			pre=ptr;
			ptr=ptr->next;
		}
		q=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data element which you want to enter: ");
		scanf("%d",&a);
		q->data=a;
		q->next=ptr;
		pre->next=q;
		return (start);
	}
	void insert_af_i(struct node *start)
	{
		struct node *ptr,*q;
		int k,a;
		printf("\nEnter the element,after which you want to enter the node: ");
		scanf("%d",&k);
		ptr=start;
		while(ptr->data!=k)
		{
			ptr=ptr->next;
		}
		printf("Enter the element which you want to enter: ");
		scanf("%d",&a);
		q=(struct node*)malloc(sizeof(struct node));
		q->data=a;
		q->next=ptr->next;
		ptr->next=q;
	}
	struct node* delete_f(struct node *start)
	{
		if(start==NULL)
		{
			printf("The opration is underflow");
			exit(1);
		}
		else{
		
		struct node *ptr;
		ptr=start;
		start=start->next;
		printf("\nThe delete element is %d\n",ptr->data);
		free(ptr);
	}
		return (start);
	}
	void delete_last(struct node *start)
	{
		if(start==NULL)
		{
			printf("\nThe opration is underflow");
			exit(1);
		}
		else
		{
		struct node *ptr,*pre;
		ptr=start;
		pre=ptr;
		while(ptr->next!=NULL)
		{
			pre=ptr;
			ptr=ptr->next;
		}
		pre->next=NULL;
		printf("\nThe delete element is %d\n",ptr->data);
		free(ptr);
	}
		return ;
	}
	void delete_af_i(struct node *start)
	{
		struct node *ptr,*pre;
		int k;
		printf("\nEnter the data after which you want to delete the node: ");
		scanf("%d",&k);
		ptr=start;
		pre=ptr;
		while(pre->data!=k)
		{
			pre=ptr;
			ptr=ptr->next;
		}
		pre->next=ptr->next;
		free(ptr);
		return ;
	}
	struct node* delete_full(struct node *start)
	{
	    struct node *pre,*aft;
	    pre=start;
	    aft=pre;
		while(aft->next!=NULL)
		{
		   	aft=pre->next;
		   	free(pre);
		   	pre=aft;
		}
		start=NULL;
		printf("\n the entire list is deleted...");	
		return (start);
	}
			
