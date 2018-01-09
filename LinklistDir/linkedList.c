#include <stdio.h>
#include <stdlib.h>

// node struct holds a value and ptr to nextNode
struct nodeType{
	int val;
	struct nodeType *nodePtr;
};
typedef struct nodeType node;

// list struct holds count of nodes and headPtr
struct linkedListType{
	node* headPtr;
	int numNodes;
};
typedef struct linkedListType linkedList;

// assign a value to a node and return the node
// @params int 
// @return node struct
node initNode(int valIn){
	node newNode = {.val = valIn, .nodePtr = NULL};
	return newNode;
}

// add a node to the end of a list, pass by reference
// @params linkedList*, int
// @return void
void addNodeEnd(linkedList* list, int valIn){
	node* newNode = (node*) malloc(sizeof(node));
	newNode->val = valIn;
	newNode->nodePtr = NULL;
	//printf("address of newNode: %p, address of headPtr: %p\n", newNode, list->headPtr);
	//if (list.numNodes == 0)	(list.headPtr)->nodePtr = newNode;
	node* curr = list->headPtr;
	while(curr->nodePtr != NULL){
		curr = curr->nodePtr;
	}
	curr->nodePtr = newNode;
	list->numNodes++;
	//return list;
}

// create a list with a head node 
// @params void
// @return linkedList struct 
linkedList initList(){
	linkedList list = {.numNodes = 1};
	list.headPtr = (node*) malloc(sizeof(node)); //{.val = 0, .ptr = NULL};
	(list.headPtr)->nodePtr = NULL;
	(list.headPtr)->val = 10;
	return list;
}

// print the list's node values and addresses
// @params linkedList struct
// @return void
void printList(linkedList list){
	node* curr = list.headPtr;
	int count = 0;
	while(curr->nodePtr != NULL){
		count++;
		printf("node# = %d, nodeVal = %d, nodeAddress = %p\n", count, curr->val, curr);
		curr = curr->nodePtr;
	}
	count++;
	printf("node# = %d, nodeVal = %d, nodeAddress = %p\n", count, curr->val, curr);
	printf("list.numNodes = %d\n", list.numNodes);
}

void removeNode(linkedList* list, int valIn){
	printf("Removing first node with value %d\n", valIn);
	node* prev = list->headPtr;
	node* curr = prev->nodePtr;
	while(curr != NULL){
		if (curr->val == valIn){
			free(prev->nodePtr);
			prev->nodePtr = curr->nodePtr;
			free(curr);
			
		}
		prev = prev->nodePtr;
	}

}



// create a linkedList and then add two nodes and print the list data
int main(){
	linkedList list = initList();
	addNodeEnd(&list, 20);
	addNodeEnd(&list, 30);
	printList(list);
	// TODO:
	// remove element with value 20 in it
	removeNode(&list, 20);
	printList(list);
	return 0;
}
