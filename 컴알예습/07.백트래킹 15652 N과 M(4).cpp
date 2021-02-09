#include <iostream>
using namespace std;

int arr[9];
int n, m;

void backTracking(int num, int c) {
	if (c == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = num; i <= n; i++) {
		arr[c] = i;
		backTracking(i, c + 1);
	}
}

int main() {
	cin >> n >> m;
	backTracking(1, 0);
	return 0;
}

