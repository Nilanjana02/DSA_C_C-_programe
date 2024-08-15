#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node* create(void)
{
	int x;
	struct node *p;
	printf("Enter the value (-1 for no data): " );
	scanf("%d",&x);
	p=(struct node*)malloc(sizeof(struct node));
	if(x==-1)
	{
		return NULL;
	}
	p->data = x;
	printf("Enter the left data of %d :",x);
    p->left =create();
	printf("Enter the right data of %d ",x);
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
	{
		return lheight+1;
	}
	else
	return rheight+1;
}
void printLevel(struct node *root,int level)
{
	  if(root==NULL)
	  {
	  	return ;
	  }
	  if(level == 1)
	  {
	  	printf(" %d ",root->data);
	  }
	  else if(level>1)
	  {
	  	printLevel(root->left,level-1);
	  	printLevel(root->right,level-1);
	  }
}
void levelWise(struct node *root)
{
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		printLevel(root,i);
		printf("----->level %d",i);
		printf("\n");
	}
}
struct node* insert(struct node *root,int value)
{
	if (root == NULL) {
		root->data = value;
        return root;
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}
int main()
{
	struct node *root;
	root=create();
	int value;
	printf("Enter the value to be inserted: ");
	scanf("%d",&value);
	root=insert(root,value);
	int h=height(root);
	printf("The height: %d\n\n",h);
	levelWise(root);
	
	
}
