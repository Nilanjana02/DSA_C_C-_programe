#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left,*right;
};
struct node* create(void)
{
	struct node *p;
	int x;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter data(-1 for no data): ");
	scanf("%d",&x);
;
	if(x==-1)
	{
		return NULL;
	}
	p=(struct node*)malloc(sizeof(struct node));
	p->data = x;

    printf("\nEnter the left child of %d:",x);
    p->left=create();
    printf("\nEnter the right child of %d : ",x);
    p->right = create();
    return p;
	
}

int degree(struct node *root, int s)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->data == s)
	{
		int degree = 0;
		if(root->left != NULL)
		  degree ++;
		if(root->right != NULL)
		degree ++;
		printf("\n\n the data is : %d",root->data);
		return degree ; 
	}
	if(root->data !=s)
	{
		degree(root->left,s);
		degree(root->right,s);
	}
	
}
int leaf(struct node *root)
{
	
	if(root==NULL)
	return 0;
	else if(root->left ==NULL && root->right == NULL)
	{
		return 1;
	}
	else
	{
	
		int lleaf = leaf(root->left);
		int rleaf = leaf(root->right);
		return lleaf+rleaf;
	}
}
	int internal(struct node *root)
	{
		if(root == NULL)
		{
			return 0;
		}
		int lcount = internal(root->left);
		int rcount = internal(root->right);
		
	    if(root->left!= NULL || root->right != NULL)
		{
			return 1+lcount+rcount;
		}
		else
		return lcount+rcount;
	}
	void siblings (struct node * root,int s)
	{
		if(root==NULL)
		return ;
		else
		{
			while(root->left->data !=s || root->right->data  !=s)
			{
				siblings(root->left,s);
				siblings(root->right,s);
			}
			if(root->left->data ==s)
			{
				printf("The siblings : %d",root->right->data);
			 } 
			 else if(root->right->data==s)
			 {
			 printf("The siblings: %d",root->left->data);
			 	
			 }
			 else
			 printf("the siblings 0");
		}
	}
	

int main()
{
	struct node *root;
	root=create();
//	levelOrder(root);
	//preorder(root);
	int s;
	printf("Enter the node you want to find out the degree: ");
	scanf("%d",&s);
	int d= degree(root,s);
	printf("The degree: %d",d);
	int L = leaf(root);
	printf("\n\n The leaf node: %d",L);
	
	int I = internal(root);
	printf("\n\n\n The internal node: %d",I);
	 int p;
	printf("Enter the value for siblings: ");
	scanf("%d",&p);
	siblings(root,p);
}
