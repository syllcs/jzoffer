struct BinaryTree{
	int value;
	BinaryTree* left;
	BinaryTree* right;
	BinaryTree* parent;
};

BinaryTreeNode* GetNext(BinaryTreeNode* node) {
	if (node == nullptr) return node;
	if (node->m_pRight) {
		node = node->m_pRight;
		while (node->m_pLeft) 
			node = node->m_pLeft;
		return node;
	}
	while (node->m_pParent) {
		if (node->m_pParent->m_pLeft == node) {
			return node->m_pParent;
		}
		node = node->m_pParent;
	}
	return nullptr;
}
