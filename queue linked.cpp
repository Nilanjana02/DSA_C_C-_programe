#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
int main()
{
	int x;
	struct node* enqueue(struct node *r);
	struct node* dequeue(struct node *f);
	struct node* return_top(struct node *f);
	void display(struct node *f);
	
	do
	{
		printf("\n\t\t\t1.Enqueue Operation");
		printf("\n\t\t\t2.Dequeue Operation");
		printf("\n\t\t\t3.Return the value of the FRONT element of the queue (without deleting it)");
		printf("\n\t\t\t4.Display the elements of a queue using an array.");
		printf("\n\t\t\t5.Exit.");
		printf("\n\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				r=enqueue(r);
				//printf("top=%d",top);
				break;
			case 2:
			    f=dequeue(f);
				break;
			case 3:
			    f=return_top(f);
				break;
			case 4:
			    display(f);
				break;
			case 5:
			    break;
			default:
			    printf("\n You Enter a wrong choice...");		
		}
	}while(x!=5);
}
struct node* enqueue(struct node *r)
{
	int k;
	struct node *ptr;
	printf("Enter an element: ");
	scanf("%d",&k);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=k;
	if(r==NULL)
	{
		f=ptr;
	}
	else
	{
		r->next=ptr;
	}
	r=ptr;
	ptr->next=NULL;	
    return r;
}
struct node* dequeue(struct node *f)
{
	struct node *p;
	p=f;
	int item;
	if(f==NULL)
	{
		printf("Operation is underflow..");
		return f;
	}
	else
	{
	item=f->data;
	printf("The deleted element is : %d",item);
	f=f->next;
	free(p);
    }
    return f;
}
struct node* return_top(struct node *f)
{
	if(f==NULL)
	{
		printf("The operation is in underflow..");
	}
	else
	{
		printf("The fornt element is : %d",f->data);
	}
	return f;
}
void display(struct node *f)
{
	struct node *i;
	i=f;
	if(i==NULL)
	{
		printf("The operation is in underflow..");
	}
	else
	{
		while(i!=NULL)
		{
			printf("%d->",i->data);
			i=i->next;
		}
		printf("end");
	}
	return ;
}
