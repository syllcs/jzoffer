#include <iostream>
#include <stack>

void reverse_print_chain(ListNode* pHead) {
	if (pHead == nullptr) return;
	std::stack<int> st;
	while (pHead != nullptr) {
		st.push(pHead->m_nValue);
		pHead = pHead->m_pNext;
	}
	while(!st.empty()) {
		std::cout << st.top() << endl;
		st.pop();
	}
}

void reverse_print_chain_recursive(ListNode* pHead) {
	if (pHead == nullptr) return;
	reverse_print_chain_recursive(pHead->m_pNext);
	cout << pHead->m_nValue << endl;
}
