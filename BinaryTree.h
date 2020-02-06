typedef int BTData;

typedef void VisitFunc(BTData Data);

typedef struct __BinaryTree 
{
	struct __BinaryTree *left;
	struct __BinaryTree *right;
	BTData data;
}BinaryTree;

typedef __BinaryTree BTreeNode;

void SetData(BTreeNode *bt, BTData data);

BTData GetData(BTreeNode *bt);

BTreeNode *MakeBTreeNode();

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);

void InOrderTraverse(BTreeNode *bt, VisitFunc action);

void PreOrderTraverse(BTreeNode *bt, VisitFunc action);

void PostOrderTraverse(BTreeNode *bt, VisitFunc action);
