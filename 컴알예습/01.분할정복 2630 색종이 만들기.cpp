#include <iostream>
using namespace std;
int blue = 0;
int white = 0;
int n;
int** arr;
void func(int rowstart, int colstart, int size) {
	int count = 0;
	for (int i = rowstart; i < rowstart + size; i++) {
		for (int j = colstart; j < colstart + size; j++) {
			if (arr[i][j] == 1) {
				count++;
			}
		}
	}
	if (count == 0) {
		white++;
	}
	else if (count == size * size) {
		blue++;
	}
	else {
		func(rowstart, colstart, size / 2);
		func(rowstart + size / 2, colstart, size / 2);
		func(rowstart, colstart + size / 2, size / 2);
		func(rowstart + size / 2, colstart + size / 2, size / 2);
	}
}
int main() {
	cin >> n;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	func(0, 0, n);
	cout << white << endl;
	cout << blue << endl;
	return 0;
}