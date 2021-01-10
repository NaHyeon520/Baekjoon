#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int j, n;
		cin >> j >> n;

		int** v = new int* [n];

		for (int k = 0; k < n; k++) {
			v[k] = new int[2];
		}

		vector<int> vol;

		for (int k = 0; k < n; k++) {
			for (int m = 0; m < 2; m++) {
				cin >> v[k][m];
			}
			vol.push_back(v[k][0] * v[k][1]);
		}

		sort(vol.begin(), vol.end());

		int count = 0;
		for (int k = vol.size() - 1; k >= 0; k--) {
			j -= vol[k];
			count++;
			if (j <= 0)
				break;
		}
		cout << count << endl;
	}
	return 0;
}