int maxProductAfterCutting_solution2(int length) {
	if (length <= 1) return 0;
	if (length == 2) return 1;
	if (length == 3) return 2;
	
	int res = 1;
	while(length > 4) {
		res *= 3;
		length -= 3;
	}
	if (length == 4) res *= 4;
	else if (length == 3) res *= 3;
	else if (length == 2) res *= 2;
	return res;
}
