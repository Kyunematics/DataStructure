#include "BinaryTree.h"
#include <stdlib.h>

void SetData(BTreeNode *bt, BTData data) 
{
	bt->data = data;
}

BTData GetData(BTreeNode *bt)
{
	return bt->data;
}

BTreeNode *MakeBTreeNode()
{
	BTreeNode *bt = (BTreeNode*)malloc(sizeof(BTreeNode));
	bt->left = NULL;
	bt->right = NULL;

	return bt;
}

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->left != NULL)
	{
		free(main->left);
	}
	main->left = sub;
}

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->right != NULL)
	{
		free(main->right);
	}
	main->right = sub;
}

void InOrderTraverse(BTreeNode *bt, VisitFunc action)
{
	if (bt == NULL)
	{
		return;
	}

	InOrderTraverse(bt->left, action);
	action(bt->data);
	InOrderTraverse(bt->right, action);
}

void PreOrderTraverse(BTreeNode *bt, VisitFunc action)
{
	if (bt == NULL)
	{
		return;
	}

	action(bt->data);
	PreOrderTraverse(bt->left, action);
	PreOrderTraverse(bt->right, action);
}

void PostOrderTraverse(BTreeNode *bt, VisitFunc action)
{
	if (bt == NULL)
	{
		return;
	}

	PostOrderTraverse(bt->left, action);
	PostOrderTraverse(bt->right, action);
	action(bt->data);
}
