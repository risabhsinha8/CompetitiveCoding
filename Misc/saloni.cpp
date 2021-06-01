#include<stdio.h>
#include<stdlib.h>
 
struct node
{
	struct node* left;
	struct node* right;
	int key;
}typedef node;

struct node *nN(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

struct node* insert(struct node* node, int key) 
{ 
    if (node == NULL) return nN(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    return node; 
} 

void preorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
    	printf("%d \n", root->key);
        preorder(root->left); 
        preorder(root->right); 
    } 
} 

int main()
{
	struct node *saloni = NULL;
	int n,i,a;
	printf("How many numbers do you wanna enter ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(i==0)
		{
			saloni = insert(saloni,a); 

		}
		else
		{
			insert(saloni, a);
		}
	}
	printf("Pre order transersal : ");
	preorder(saloni);
}
