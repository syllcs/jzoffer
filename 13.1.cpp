#include <iostream>
int movingCount(int threshold, int rows, int cols) {
	if (threshold < 0 || rows <= 0 ||cols <= 0) 
		return 0;
	
	bool* visited = new bool[rows*cols];
	for(int i = 0; i < rows*cols; i++) {
		visited[i] = false;
	}
	int count = movingCountCore(threshold, rows, cols, 0, 0, visited);
	delete[] visited;
	return count;
}

int movingCountCore(int threshold, int rows, int cols, int row, int col, bool* visited) {
	if (row < 0 || row >= rows || col < 0 || col >= cols || visited[row*cols+col])
		return 0;
	int k = row / 10 + row % 10 + col / 10 + col % 10;
	count = 0;
	if (k <= threshold) {
		visited[row*cols+col] = true;
		count = 1 + movingCountCore(threshold, rows, cols, row+1, col, visited) 
				  + movingCountCore(threshold, rows, cols, row-1, col, visited)
				  + movingCountCore(threshold, rows, cols, row, col+1, visited)
				  + movingCountCore(threshold, rows, cols, row, col-1, visited);
		return count;
	}
	return 0;
}
