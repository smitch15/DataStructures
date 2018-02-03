#include "Tree.h"

Tree::Tree(){
	
}

Tree::Tree(int* intArr){
	// check if pointer is null
	// iterate through the arr and add the val's to the tree
	// to do this, dynamically create a node recursively iterate
	// through the nodes in the tree
	
	if (intArr == NULL){
		printf("invalid pointer address");
		exit(1);
	}
	Node * nodePtr = makeTree(intArr);
	for (int i = 0; i < sizeof(intArr); i++){
		if (intArr == NULL){
			continue;
		}
		if (this->rootPtr == NULL){
			this->rootPtr = new Node(intArr[i]);
		}
		Node* newN = new Node(*intArr);
		
		if (newN->value < this->rootPtr){
			this->rootPtr->leftN = newN;
		}
		if (newN->value >= this->rootPtr){
			this->rootPtr->rightN = newN;
		}
		
		intArr++;
	}
	
}

Node* makeTree(intArr, ){
	
}
