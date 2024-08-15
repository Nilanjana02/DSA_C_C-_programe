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
int height(struct node *root)
{
	if(root == NULL)
	{
		return 0;
	}
	int lheight = height(root->left);
	int rheight = height(root->right);
	if(lheight>rheight)
	return lheight+1;
	else
	return rheight+1;
}
void FindLevel(struct node* root,int level)
{
	if(root == NULL)
	{
		return;
	}
	if(level == 1)
	{
		printf(" %d ",root->data);
	}
	else if(level>1)
	{
		FindLevel(root->left,level-1);
		FindLevel(root->right,level-1);
	}
}
	

void levelOrder(struct node *root)
{
	int h = height(root);
	printf("the height:  %d\n\n",h);
	for(int i=1;i<=h;i++)
	{
	   FindLevel(root,i);	
	   printf("---> level %d",i);
	   printf("\n");
	}
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
		return degree ; 
	}
	if(root->data !=s)
	{
		degree(root->left,s);
		degree(root->right,s);
	}
	printf("\n\n the final root = %d",root->left->data);

}
int main()
{
	struct node *root;
	root=create();
	levelOrder(root);
	//preorder(root);
	int s;
	printf("Enter the node you want to find out the degree: ");
	scanf("%d",&s);
	int d= degree(root,s);
	printf("The degree: %d",d);
}
