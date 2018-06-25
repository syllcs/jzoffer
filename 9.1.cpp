template<typename T> void CQueue<T>::appendTail(const T& element) {
	stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead() {
	if (!stack2.empty()) {
		T head = stack2.top();
		stack2.pop();
	}
	else if (!stack1.empty()) {
		while(!stack1.empty()) {
			stack2.push(stack1.top());
			stack1.pop();
		}
		T head = stack2.top();
		stack2.pop();
	}
	else{
		throw new exception("queue is empty");
	}
	return head;
}
