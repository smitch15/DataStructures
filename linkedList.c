#include <stdio.h>
#include <stdlib.h>

struct nodeType{
	int val;
	struct nodeType *nodePtr;
};
typedef struct nodeType node;

struct linkedListType{
	node* headPtr;
	int numNodes;
};
typedef struct linkedListType linkedList;

node initNode(int valIn){
	node newNode = {.val = valIn, .nodePtr = NULL};
	return newNode;
}

linkedList addNodeEnd(linkedList list, int valIn){
	if (list.numNodes == 0){
		node* newNode = (node*) malloc(sizeof(node));
		newNode->val = valIn;
		newNode->nodePtr = NULL;
		list.headPtr = newNode;
		list.numNodes++;
	}else{
		node* newNode = (node*) malloc(sizeof(node));
		newNode->val = valIn;
		newNode->nodePtr = NULL;
		node* curr = list.headPtr;
		while(curr->nodePtr != NULL){
			curr = curr->nodePtr;
		}
		curr->nodePtr = newNode;
		list.numNodes++;
		//node* nextNodePtr = (list.headPtr)->nodePtr; //(node*) malloc(sizeOf(node));
		//while(nextNodePtr != NULL){
		//	nextNodePtr = nextNodePtr->nodePtr;
		//}
		//nextNodePtr = node0;
		//node0->nodePtr = NULL;
		//list.numNodes++;
	}
	return list;
}

linkedList initList(){
	linkedList list = {.numNodes = 0};
	//node* headNodePtr = (node*) malloc(sizeof(node)); //{.val = 0, .ptr = NULL};
	//headNodePtr->nodePtr = NULL;
	//headNodePtr->val = 10;
	//list = addNodeEnd(list, headNodePtr);
	list = addNodeEnd(list, 10);
	return list;
}

void printList(linkedList list){
	node* curr = list.headPtr;
	int count = 0;
	//printf("enter printList\n");
	while(curr->nodePtr != NULL){
		count++;
		printf("node# = %d, nodeVal = %d, nodeAddress = %p\n", count, curr->val, list.headPtr);
		curr = curr->nodePtr;
	}
	count++;
	printf("node# = %d, nodeVal = %d, nodeAddress = %p\n", count, curr->val, curr);
	printf("list.numNodes = %d, list iterations = %d\n", list.numNodes, count);
}

int main(){
	//int x = 10;
	//printf("address of x: %p", &x);
	//printf("address on heap: %p", (int *) malloc(sizeof(int)));
	linkedList list = initList();
	addNodeEnd(list, 20);
	addNodeEnd(list, 30);
	printList(list);
	return 0;
}
