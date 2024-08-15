#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
int main()
{
	struct node *start =NULL;
	int x;
	char ch;
	struct node * create (struct node *start);
	void display (struct node *start);
	struct node * insert_b (struct node *start);
	struct node * insert_e (struct node *start);
	struct node * insert_b_i (struct node *start);
    struct node * insert_a_i(struct node *start);
	struct node * delete_b (struct node *start);
	struct node * delete_e (struct node *start);
	struct node * delete_a_i (struct node *start);
	struct node * all_delete(struct node *start);
	do
	{
		printf("\n1.create ");
		printf("\n2.display.");
		printf("\n3.insert at beginning.");
		printf("\n4.insert at end.");
		printf("\n5.insert before the given node.");
		printf("\n6.insert after the given node.");
		printf("\n7.Delete the first.");
		printf("\n8.Delete the last.");
		printf("\n9.Delete after the given node.");
		printf("\n10.Delete the full");
		printf("\n11.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1: 
			    start=create(start);
			    break;
			case 2:
			    display(start);
				break;
			case 3:
			    start=insert_b(start);
				break;
			case 4:
			    start=insert_e(start);
				break;
			case 5:
			   start=insert_b_i(start);
			   break;
			case 6:
			    start=insert_a_i(start);
				break;
			case 7:
			    start=delete_b(start);
				break;
			case 8:
			    start=delete_e(start);
				break;
			case 9:
			    start=delete_a_i(start);
				break;
			case 10:
			    start=all_delete(start);
			case 11:
			    break;
			default:
			    printf("You enter wrong choice..");	
			}
		}while(x!=11);	  
}
struct node * create (struct node *start)
{
	struct node *ptr,*p;
	int k;
	char ch;
	do
	{
	printf("Enter the element: ");
	scanf("%d",&k);
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=k;
	ptr->next=NULL;
	if(start==NULL)
	{
	start=ptr;	
	}
	else
	{
		p->next=ptr;	
	}
	p=ptr;
	printf("Do you want to insert any more(y/n): ");
	fflush(stdin);
	scanf("%c",&ch);
}while(ch=='y');
return start;
}
void display (struct node *start)
{
	struct node *ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("the list is empty..");
		return ;
	}
	else
	{
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	return;
	}
}
struct node* insert_b (struct node *start)
{
	struct node *ptr;
	int k;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element");
	scanf("%d",&k);
	ptr->data=k;
	ptr->next=start;
	start=ptr;
	return start;
}
struct node * insert_e (struct node *start)
{
	int k;
	struct node *ptr,*p;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element: ");
	scanf("%d",&k);
	ptr->data=k;
	ptr->next=NULL;
	if(start==NULL)
	{
		start=ptr;
		return start;
	}
	else
	{
    p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	}
	return start;	
}
struct node * insert_b_i (struct node *start)
{
	struct node *ptr,*p,*q;
	int k,item;
	p=start;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element before which you want to insert: ");
	scanf("%d",&item);
	printf("Enter the element: ");
	scanf("%d",&k);
	ptr->data=k;
	while(p->data!=item)
	{
		q=p;
		p=p->next;
	}
	q->next=ptr;
	ptr->next=p;
	return start;
	
}
struct node * insert_a_i(struct node *start)
{
	struct node *ptr,*p,*q;
	int k,item;
	p=start;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element after which you want to insert: ");
	scanf("%d",&item);
	printf("Enter the element: ");
	scanf("%d",&k);
	ptr->data=k;
	while(p->data!=item)
	{
		p=p->next;
	}
	q=p->next;
	p->next=ptr;
	ptr->next=q;
	return start;
}
struct node * delete_b (struct node *start)
{
	struct node *ptr,*p;
	p=start;
	ptr=p;
	p=p->next;
	start=p;
	free(ptr);
	return start;
}
struct node * delete_e (struct node *start)
{
	struct node *ptr,*p;
	ptr=start;
	while(ptr->next!=NULL)
	{
		p=ptr;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	free(ptr);
	return start;
}
struct node * delete_a_i (struct node *start)
{
	struct node *ptr,*p;
	int k;
	printf("Enter the element after which delete: ");
	scanf("%d",&k);
	while(ptr->data!=k)
	{
		ptr=ptr->next;
	}
	p=ptr->next;
	ptr->next=p->next;
	free(p);
	return start;
}
struct node * all_delete(struct node *start)
{
	struct node *ptr,*p;
	ptr=start;
	while(ptr->next!=NULL)
	{
		p=ptr;
		ptr=ptr->next;
		free(p);	
	}
	start=NULL;
	printf("\n The list id deleted");
	return start;
}
