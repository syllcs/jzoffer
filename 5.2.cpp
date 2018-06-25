
void insert_array(int* a1, int* a2, int length1, int length2) {
	int ptr = length1 + length2 - 1;
	length1--;
	length2--;
	while (ptr >= 0 && length1 < ptr) {
		if (a1[length1] > a2[length2])
			a1[ptr--] = a1[length1--];
		else a1[ptr--] = a2[length2--];
	}
	return;
}
