#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> score;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		score.push_back(a);
	}
	int count = 0;
	if (score.size() == 1) {
		cout << 0;
		return 0;
	}
	for (int i = score.size() - 1; i >= 1; i--) {
		if (score[i] <= score[i - 1]) {
			int temp = 0;
			temp += (score[i - 1] - score[i]);
			temp++;
			score[i - 1] -= temp;
			count += temp;
		}
	}
	cout << count;
	return 0;
}