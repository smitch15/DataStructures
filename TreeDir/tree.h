#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

class treeNode{
	int data;
	treeNode *nodeRight;
	treeNode *nodeLeft;
public:
	treeNode();
	treeNode(int dataIn);
	void setNodeR(treeNode *tnIn);
	void setNodeL(treeNode *tnIn);
	treeNode* getNodeR();
	treeNode* getNodeL();
	int getData();
};

#endif 
