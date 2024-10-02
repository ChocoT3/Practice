#define	_CRT_SECURE_NO_WARNINGS
#include"BinaryTree.h"

int main()
{
	BinaryTree A = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	//BinaryTreeNode* A = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	InitTree(A);
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;
	BinaryTreeNode* B = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;
	BinaryTreeNode* C = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;
	BinaryTreeNode* D = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;
	BinaryTreeNode* E = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	//PrevOrder(A);
	//printf("\n");
	//InOrder(A);
	//printf("\n");
	//PostOrder(A);
	//printf("\n");
	//printf("%d\n", TreeLeafSize(A));
	//printf("%d\n", TreeLeafSize(B));
	//printf("%d\n", TreeSize(A));
	//printf("%d\n", TreeSize(B));
	LevelOrder(A);
	return 0;
}