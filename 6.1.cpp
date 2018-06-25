void RemoveNode(ListNode** pHead, int value) {
	if (pHead == nullptr || *pHead == nullptr) return;
	ListNode * tobedeleted = nullptr;
	if ((*pHead)->m_nValue == value) {
		tobedeleted = *pHead;
		*pHead = (*pHead)->m_pNext;
	}
	else {
		ListNode* p = *pHead;
		while (p->m_pNext != nullptr && p->m_pNext->m_nValue != value) {
			p = p->m_pNext;
		}
		if (p->m_pNext != nullptr && p->m_pNext->m_nValue == value) {
			tobedeleted = p->m_pNext;
			p->m_pNext = p->m_pNext->m_pNext;
		}
	}
	if (tobedeleted != nullptr) {
		delete tobedeleted;
		tobedeleted = nullptr;
	}
}
