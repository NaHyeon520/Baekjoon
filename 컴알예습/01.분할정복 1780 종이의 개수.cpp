#include <iostream>
using namespace std;
int n;
int** arr;
int cnt0 = 0;
int cnt1 = 0;
int cntm1 = 0;

void func(int rowstart, int colstart, int size) {
	int zero = 0;//0 count
	int one = 0;//1 count
	int minus = 0;//-1 count
	for (int i = rowstart; i < rowstart + size; i++) {
		for (int j = colstart; j < colstart + size; j++) {
			if (arr[i][j] == 0) {
				zero++;
			}
			else if (arr[i][j] == 1) {
				one++;
			}
			else {
				minus++;
			}
		}
	}
	if (zero == size * size) {
		cnt0++;
	}
	else if (one == size * size) {
		cnt1++;
	}
	else if (minus == size * size) {
		cntm1++;
	}
	else {
		func(rowstart, colstart, size / 3);//1
		func(rowstart, colstart + size / 3, size / 3);//2
		func(rowstart, colstart + 2 * size / 3, size / 3);//3
		func(rowstart + size / 3, colstart, size / 3);//4
		func(rowstart + size / 3, colstart + size / 3, size / 3);//5
		func(rowstart + size / 3, colstart + 2 * size / 3, size / 3);//6
		func(rowstart + 2 * size / 3, colstart, size / 3);//7
		func(rowstart + 2 * size / 3, colstart + size / 3, size / 3);//8
		func(rowstart + 2 * size / 3, colstart + 2 * size / 3, size / 3);//9
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
	cout << cntm1 << endl;
	cout << cnt0 << endl;
	cout << cnt1 << endl;
	return 0;
}