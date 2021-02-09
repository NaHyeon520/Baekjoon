#include <iostream>
#include <algorithm>
using namespace std;

int arr[9];
int print[9];
int n, m;

void backTracking(int c) {
	if (c == m) {
		for (int i = 0; i < m; i++)
			cout << print[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		print[c] = arr[i];
		backTracking(c + 1);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	backTracking(0);
	return 0;
}