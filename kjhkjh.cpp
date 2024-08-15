#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
//	struct node* call(struct node *start);
	void delete_last(struct node *start);
	struct node *start;
	start=NULL;
//	start=call(start);
	delete_last(start);
	
}
struct node* call(struct node *start)
{
	start=NULL;
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
