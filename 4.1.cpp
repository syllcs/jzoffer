//find num in a matrix.
bool find_in_matrix(int* matrix, int rows, int columns, int num) {
	int row = 0, column = columns;
	while(row <= rows && column >= 0) {
		if (num == matrix[row * columns + column]) return true;
		if (num > matrix[row * columns + column]) row++;
		else column;
	}
	return false;
}
