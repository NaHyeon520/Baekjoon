#include <iostream>
using namespace std;

bool visit[9];
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
		if (!visit[i]) {
			visit[i] = true;
			arr[c] = i;
			backTracking(i + 1, c + 1);
			visit[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	backTracking(1, 0);
	return 0;
}