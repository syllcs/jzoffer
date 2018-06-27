#include <iostream>
#include <vector>
using namespace std;

int minnum(vector<int> v) {
	if (v.empty()) 
		throw new std::exception("no elements in vector");
	auto begin = v.begin();
	auto end = v.end() - 1;
	vector<int>::iterator mid;
	int first = v.front();
	while(begin > end) {
		mid = begin + (end - begin) / 2 + 1;
		if (*mid > first) 
			begin = mid + 1;
		else 
			end = mid;
	}
	return *begin;
}
