#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string* first = new string[n];
	string* second = new string[m];
	for (int i = 0; i < n; i++) {
		cin >> first[i];
	}
	sort(first, first + n);

	for (int i = 0; i < m; i++) {
		cin >> second[i];
	}

	int count = 0;
	vector<string> name;
	for (int i = 0; i < m; i++) {
		int low = 0;
		int high = n;
		int mid;
		while (low <= high) {
			mid = (low + high) / 2;
			if (mid == n)
				break;
			if (first[mid] == second[i]) {
				count++;
				name.push_back(second[i]);
				break;
			}
			if (first[mid] > second[i]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
	}
	cout << count << "\n";

	if (count != 0) {
		sort(name.begin(), name.end());
		for (int i = 0; i < name.size(); i++) {
			cout << name[i] << "\n";
		}
	}
	return 0;
}