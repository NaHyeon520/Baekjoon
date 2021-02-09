#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* first = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> first[i];
	}
	sort(first, first + n);
	int m;
	cin >> m;
	int* second = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> second[i];
	}


	for (int i = 0; i < m; i++) {
		int low = 0;
		int high = n;
		int mid;
		int flag = 0;
		while (low <= high) {
			mid = (low + high) / 2;
			if (first[mid] == second[i]) {
				flag = 1;
				cout << 1 << " ";
				break;
			}
			if (first[mid] > second[i]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		if (flag == 0)
			cout << 0 << " ";
	}
	return 0;
}