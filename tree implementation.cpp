#include<stdio.h>
struct node{
	int data;
	node* left;
	node* right;
};
int main()
{
	struct node* root;
	root= createnode(2);
	root->left = createnode(3);
	root->right = createnode(4);
	root->left->left = createnode(5);
	root->left->right = createnode(6);
	
	
	
	}
