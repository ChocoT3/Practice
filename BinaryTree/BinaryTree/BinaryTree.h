#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"Queen.h"


#define BTDataType char

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BinaryTreeNode,*BinaryTree;

void InitTree(BinaryTree root);

void PrevOrder(BinaryTree root);
void InOrder(BinaryTree root);
void PostOrder(BinaryTree root);
int TreeLeafSize(BinaryTree root);
int TreeSize(BinaryTree root);
void LevelOrder(BinaryTree root);