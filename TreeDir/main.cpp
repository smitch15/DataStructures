#include "tree.h"

int main(){
	treeNode tn1(18);
	treeNode tn2;
	printf("tn2 data: %d\n", tn2.getData());
	printf("tn2 address of right node: %p\n", tn2.getNodeR());
	printf("tn2 address of left node: %p\n", tn2.getNodeL());
	printf("tn1 data: %d\n", tn1.getData());
/*
	treeNode tn1(17);
	treeNode tn2(13);
	treeNode tn3(12);
	tn1.setNodeR(&tn2);
	tn2.setNodeL(&tn3);
	printf("%d\n", tn1.getNodeR()->getData());
	printf("%d\n", tn1.getNodeR()->getNodeL()->getData());
 */
	return 0;
}
