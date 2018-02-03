#ifndef NODE_H
#define NODE_H

class Node{
public:
	Node();
	Node(int n);
private:
	int value;
	Node* rightN;
	Node* leftN;
};

#endif
