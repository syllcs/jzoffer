
struct BinaryTreeNode {
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

BinaryTreeNode* Constructer(int* preorder, int* inorder, int length) {
	return recursiveConstrucger(preorder, preorder+length-1, inorder, inorder+length-1);
}

BinaryTreeNode* recursiveConstructer(int* bpre, int* epre, int* bin, int* ein) {
	//create node.
	BinaryTreeNode* node = new BinaryNode();
	node->m_nValue = *bpre;
	if (bpre == epre)
		return node;
	//find this number in inorder.
	int inpos;
	for(inpos = 0; bin + inpos != ein; inpos++) 
		if (*(bin + inpos) == *bpre) break;
	if (inpos > 0) 
		node->m_pLeft = recursiveConstructer(bpre+1, bpre+1+inpos, bin, bin+inpos);
	if (bpre + inpos + 1 != epre)
		node->m_pRight = recursiveConstructer(bpre+1+inpos, epre, bin+inpos+1, ein);
	return node;
}
