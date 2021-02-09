#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	vector<int> fruit;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		fruit.push_back(temp);
	}
	sort(fruit.begin(), fruit.end());
	if (fruit[0] > l) {
		cout << l;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (fruit[i] <= l) {
				l++;
			}
			else
				break;
		}
		cout << l;
	}
	return 0;
}