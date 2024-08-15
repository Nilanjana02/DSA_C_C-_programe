#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *create(void);
	void display(struct node *start);
	int sum(struct node *start);
	int count(struct node *start);
	struct node *insert_beg(struct node *start);
	void insert_last(struct node *start);
	struct node*insert_specify(struct node *start);
	struct node *delete_beg(struct node *start);
	void delete_last(struct node *start);
	struct node *delete_specify(struct node *start);
	float avarage(struct node *start);
	void large_small(struct node *start);
	struct node *start;
	int x,s,c;
	float avg;
	do
	{
		printf("\n\t\t\t1.Create Linked List.");
		printf("\n\t\t\t2.Display Linked List.");
		printf("\n\t\t\t3.Sum of the element.");
		printf("\n\t\t\t4.Count The Nodes.");
		printf("\n\t\t\t5.Avarage.");
		printf("\n\t\t\t6.Find the largest and smallest.");
		printf("\n\t\t\t7.Node insert at begining.");
		printf("\n\t\t\t8.Node insert at last.");
		printf("\n\t\t\t9.Node insert at specified position.");
		printf("\n\t\t\t10.Delete node from begining.");
		printf("\n\t\t\t11.Delete node from the last position.");
		printf("\n\t\t\t12.Delete node from the specified position.");
		printf("\n\t\t\t13.Quit");
		printf("\n\n\t\t\tEnter your choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				start=create();
				break;
			case 2:
				display(start);
				break;
			case 3:
				s=sum(start);
				printf("Sum = %d ",s);
				break;
			case 4:
				c=count(start);
				printf("Number of nodes = %d",c);
				break;
			case 5:
				avg=avarage(start);
				printf("Avarage=%f",avg);
				break;
			case 6:
				large_small(start);
				break;
			case 7:
				start=insert_beg(start);
				break;
			case 8:
				insert_last(start);
				break;
			case 9:
				start=insert_specify(start);
				break;
			case 10:
				start=delete_beg(start);
				break;
			case 11:
				delete_last(start);
				break;
			case 12:
				start=delete_specify(start);
				break;
			case 13:
				break;
			default:
				printf("Wrong Choice........");
			}
		}while(x!=13);
	return 0;
}
struct node *create(void)
{
	struct node *start,*n,*p;
	int k,s;
	char ch;
	start=NULL;
	s=sizeof(struct node);
	do
	{
		printf("Enter an element: ");
		scanf("%d",&k);
		n=(struct node *)malloc(s);
		n->data=k;
		n->link=NULL;
		if(start==NULL)
		start=n;
		else
		p->link=n;
		p=n;
		printf("\nAny more element(y/n)? ");
		fflush(stdin);
		ch=getchar();
		
	}while(ch=='y');
	return(start);
	}
	void display(struct node *start)
	{
		struct node *p;
		p=start;
		while(p!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
		}
		printf("END");
		return;
	}
	int sum(struct node*start)
	{
		struct node *p;
		int s=0;
		p=start;
		while(p!=NULL)
		{
			s=s+p->data;
			p=p->link;
		}
		return(s);
	}
	int count(struct node *start)
	{
		struct node *p;
		int c=0;
		p=start;
		while(p!=NULL)
		{
			c++;
			p=p->link;
		}
		return(c);
	}
	float avarage(struct node *start)
	{
		float avg;
		int s,c;
		s=sum(start);
		c=count(start);
		avg=(float)s/c;
		return(avg);
	}
	void large_small(struct node *start)
	{
		struct node *p;
		int lar,small,flag=1;
		lar=start->data;
		small=start->data;
		p=start;
		while(p!=NULL)
		{
			if(flag==1)
			{
			lar=start->data;
		small=start->data;
		flag=0;
	}
	else
	{
		  if(lar<p->data)
		  lar=p->data;
		  if(small>p->data)	
		  small=p->data;
	}
		p=p->link;
	}
		printf("\nThe largest number in the list is = %d",lar);
		printf("\nThe smallest number in the list is = %d",small);
		return;	
	}
		
	struct node *insert_beg(struct node *start)
	{
		struct node *n;
		int item;
		printf("Enter the element to be inserted at beginning: ");
		scanf("%d",&item);
		n=(struct node *)malloc(sizeof(struct node));
		n->data=item;
		n->link=start;
		start=n;
		return(start);
	}
	void insert_last(struct node *start)
	{
		struct node *p,*n;
		int item;
		printf("Enter the element to be inserted at the end: ");
		scanf("%d",&item);
		n=(struct node *)malloc(sizeof(struct node));
		n->data=item;
		n->link=NULL;
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=n;
		return;
	}
	struct node*insert_specify(struct node *start)
	{
		struct node *p,*n;
		int item,k;
		printf("Enter an element to br inserted: ");
		scanf("%d",&item);
		printf("Enter the position: ");
		scanf("%d",&k);
		n=(struct node *)malloc(sizeof(struct node));
		n->data=item;
		n->link=NULL;
		if(k==1)
		{
			n->link=start;
			start=n;
		}
		else
		{
			p=start;
			for(int i=1;i<k-1 && p->link!=NULL;i++)
			p=p->link;
			n->link=p->link;
			p->link=n;
		}
		return(start);
	}
	struct node *delete_beg(struct node *start)
	{
		struct node *p;
		p=start;
		start=start->link;
		printf("The first element %d is deleted\n",p->data);
		free(p);
		return(start);
	}
	void delete_last(struct node *start)
	{ 
	    struct node *p,*n;
	    if(start==NULL)
	    {
	    	printf("\nList is already empty.");
		}
		else
		{
			p=start;
			n=start;
			while(p->link!=NULL)
			{
				n=p;
				p=p->link;
			}
			if(p==start)
			start=NULL;
			else
			n->link=NULL;
			//free(p);
			printf("\nThe last element %d is delete.\n",p->data);
			free(p);
			return;
		}		
	}
	struct node *delete_specify(struct node *start)
	{
		struct node *p,*n;
		int k,i;
		printf("\nEnter the position : ");
		scanf("%d",&k);
		p=start;
		if(k==1)
		{
			start=p->link;
			free(p);
			printf("\n Node deleted");
			return(start);
		}
		else
		{
		for(i=1;i<k;i++)
		{
			n=p;
			p=p->link;
			if(p==NULL)
			{
				printf("\nThere are less than %d elements in the list...\n",k);
				return(start);
			}
		}
		n->link=p->link;
		free(p);
		printf("\nDeleted  node ");
	}
		return(start);	
	}
