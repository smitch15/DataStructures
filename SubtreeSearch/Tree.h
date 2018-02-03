#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

class Tree{
public:
	Tree();
	Tree(int* intArr);
	bool findSubtree(Node* nodePtr);
	void printTree();
private:
	Node* rootPtr;
};

#endif
