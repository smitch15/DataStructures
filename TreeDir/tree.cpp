#include "tree.h"

treeNode::treeNode(){
	data = 0;
	nodeRight = NULL;
	nodeLeft = NULL;
}

treeNode::treeNode(int dataIn){
	data = dataIn;
}

int treeNode::getData(){
	return data;
}

treeNode* treeNode::getNodeR(){
	return nodeRight;
}


treeNode* treeNode::getNodeL(){
	return nodeLeft;
}


/*
class treeNode{
	private:
		int data;
		treeNode *nodeRight;
		treeNode *nodeLeft;
	public:
		treeNode(){
			this->data = 0;
			this->nodeRight = NULL;
			this->nodeLeft = NULL;
		}
		treeNode(int dataIn){
			this->data = dataIn;
			this->nodeRight = NULL;
			this->nodeLeft = NULL;
		}
		void setNodeR(treeNode *tnIn){
			this->nodeRight = tnIn;
		}
		void setNodeL(treeNode *tnIn){
			this->nodeLeft = tnIn;
		}
		treeNode* getNodeR(){
			return nodeRight;
		}
		treeNode* getNodeL(){
			return nodeLeft;
		}
		int getData(){
			return data;
		}
};
*/



