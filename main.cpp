#include "BinaryTree.h"
#include <stdio.h>

void ShowData(BTData data)
{
	printf("%d\n", data);
}

int main()
{
	BTreeNode *bt1 = MakeBTreeNode();
	BTreeNode *bt2 = MakeBTreeNode();
	BTreeNode *bt3 = MakeBTreeNode();
	BTreeNode *bt4 = MakeBTreeNode();
	BTreeNode *bt5 = MakeBTreeNode();

	SetData(bt1, 10);
	SetData(bt2, 20);
	SetData(bt3, 30);
	SetData(bt4, 40);
	SetData(bt5, 50);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	MakeRightSubTree(bt2, bt5);

	InOrderTraverse(bt1, ShowData);

	printf("\n\n");

	PostOrderTraverse(bt1, ShowData);

	printf("\n\n");

	PreOrderTraverse(bt1, ShowData);

}
