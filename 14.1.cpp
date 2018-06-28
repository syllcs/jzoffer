int maxProductAfterCutting_solution(int length) {
	if (length <= 1) return 0;
	if (length == 2) return 1;
	if (length == 3) return 2;
	vector<int> max_product;
	max_product.push_back(0);
	max_product.push_back(1);
	max_product.push_back(2);
	max_product.push_back(3);
	for(int i = 4; i <= length; i++) {
		int curr_max = 0;
		for(int j = 1; j < i; j++) {
			curr_max = curr_max < max_product[j] * max_product[i-j] ? max_product[j] * max_product[i-j] : curr_max;
		}
		max_product.push_back(curr_max);
	}
	return max_product[length];
}
