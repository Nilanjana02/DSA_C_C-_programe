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
	head->data=35;
	head->link=NULL;
	
	struct node *head1;
	head1=(struct node*)malloc(sizeof(struct node));
	head1->data=67;
	head1->link=NULL;
	head->link=head1;
	
    //struct node *ptr;
//	ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=90;
//	ptr->link=head;
//	head=ptr;
	
	struct node *head2;
	head2=(struct node*)malloc(sizeof(struct node));
	head2->data=89;
	head2->link=NULL;
	head->link->link=head2;
	
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=90;
	ptr->link=head;
	head=ptr;
	
	while(head!=NULL)
	{
		printf("\t%d",head->data);
		head=head->link;
	}
return 0;	
}

