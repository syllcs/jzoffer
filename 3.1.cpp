#include <iostream>

int repeat_num(int a[], int length) {
	
	for (int i = 0; i < length; i++) {
		while(a[i] != i) {
			if (a[a[i]] == a[i]) return a[i];
			int t = a[a[i]];
			a[a[i]] = a[i];
			a[i] = t;
		}
	}
	return -1;
}


