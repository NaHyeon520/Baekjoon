#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[32];
	vector<int> cost;

	arr[1] = N;

	for (int i = 2; i < 32; i++) {
		if (i % 2 == 0) {
			arr[i] = arr[i / 2] / 2;
		}
		else {
			arr[i] = arr[i / 2] - arr[i - 1];
			cost.push_back(arr[i] * arr[i - 1]);
		}
	}

	int count = 0;
	for (int i = 0; i < cost.size(); i++) {
		count += cost[i];
	}
	cout << count;

	return 0;
}