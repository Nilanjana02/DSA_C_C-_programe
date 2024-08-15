#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=56;
	head->link=NULL;
	
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=34;
	ptr->link=NULL;
	head->link=ptr;
	
    ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=67;
	ptr->link=NULL;
	head->link->link=ptr;
	
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=90;
	ptr->link=NULL;
	head->link->link->link=ptr;
	
	while(head!=NULL)
	{
		printf("\t%d",head->data);
		head=head->link;
	}
	return 0;	
}
