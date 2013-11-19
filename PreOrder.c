#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	char data;
	struct Node *LChild;
	struct Node *RChild;
}BiNode, *BiTree;

int CreatBiTree(BiTree root)
{
	char ch;
	printf("Input:");
	ch = getchar();
	getchar();

	if(ch == '^')
		root = NULL;
	else
	{
		if(!(root = (BiNode *)malloc(sizeof(BiNode))));
			return -1;
		root -> data = ch;
		CreatBiTree(root->LChild);
		CreatBiTree(root->RChild);
	}
		return 1; 
}	

void visit(char ch)
{
	printf(" %c",ch);
}

void PreOrder(BiTree root)
{

	if(root != NULL)
	{
		visit(root->data);
		printf(" %c",root->data);
		PreOrder(root->LChild);
		PreOrder(root->RChild);
	}

}

int main()
{
	BiTree root;
	root = (BiNode *)malloc(sizeof(BiNode));
	CreatBiTree(root);
	printf("PreOrder:\n");
	PreOrder(root);
}
		
