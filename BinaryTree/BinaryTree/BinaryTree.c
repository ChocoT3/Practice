#define	_CRT_SECURE_NO_WARNINGS
#include"BinaryTree.h"


void InitTree(BinaryTree root)
{
	root->left = root->right = NULL;
	root->data = 0;
}

void PrevOrder(BinaryTree root)
{
	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BinaryTree root)
{
	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}
void PostOrder(BinaryTree root)
{
	if (root == NULL)
	{
		//printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);

	printf("%c ", root->data);

}

int TreeSize(BinaryTree root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}


int TreeLeafSize(BinaryTree root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	else
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

void LevelOrder(BinaryTree root)
{
	Queue Queue;
	InitQueue(&Queue);
	if (root)
		QueuePush(&Queue, root);

	while (!IsEmpty(&Queue))
	{
		BinaryTreeNode* front = QueueFront(&Queue);
		printf("%c", front->data);
		QueuePop(&Queue);


		if (front->left)
		{
			QueuePush(&Queue, front->left);

		}
		if (front->right)
		{
			QueuePush(&Queue, front->right);
		}
	}

	DestoryQueue(&Queue);
}