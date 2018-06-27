#include <iostream>

int Min(int* numbers, int length) {
	if (numbers == nullptr || length <= 0) 
		throw new std::exception("Invalid parameters");
	int begin = 0, end = length - 1;
	int mid;
	int last = numbers[end];
	while (begin < end) {
		mid = (begin + end) / 2;
		if (numbers[mid] > last) 
			begin = mid + 1;
		else 
			end = mid;
	}
	return numbers[begin];
}
