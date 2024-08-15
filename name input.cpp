#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(char value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a character into the BST
struct TreeNode* insert(struct TreeNode* root, char value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// In-order traversal to display the sorted sequence
void inOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%c ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    // Construct the BST
    struct TreeNode* root = NULL;
    for (int i = 0; name[i] != '\0'; ++i)
        root = insert(root, name[i]);

    // Display the sorted sequence
    printf("Sorted sequence of characters: ");
    inOrderTraversal(root);

    // Free memory (optional)
    // You can omit this part if you're not concerned about memory cleanup
    // (since the program will exit anyway)
    free(root);

    return 0;
}

