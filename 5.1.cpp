#include <string>

void replace_blank(char* s, int length) {
	if ( length <= 0 || s == nullptr) return;
	int b_num = 0;
	int s_length = 0;
	int i;
	for (i = 0; i < length; i++) {
		if (s[i] == '\0') {
			s_length = i;
			break;
		}
		if (s[i] == ' ') b_num++;
	}
	if (i == length) return;
	if (s_length + 2*b_num > length - 1) return;
	int ptr = 2*b_num + s_length;
	while(ptr != s_length && ptr >= 0) {
		if (s[s_length] == '\0') {
			s[ptr--] = '0';
			s[ptr--] = '2';
			s[ptr--] = '%';
		}
		else 
			s[ptr--] = s[s_length];
		s_length--;
	}
	return;
}
