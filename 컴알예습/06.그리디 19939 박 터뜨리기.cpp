#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	int sum = 0;
	for (int i = 1; i <= k; i++) {
		v.push_back(i);
		sum += i;
	}
	if (sum == n) {//최소로 넣으면 딱맞는 경우
		cout << v[v.size() - 1] - v[0];
	}
	else if (sum < n) {//최소개수로 넣고 남는 경우
		int temp = n - sum;
		int index = k;
		while (true) {
			v[index - 1] += 1;
			index--;
			temp--;
			if (temp == 0) {
				break;
			}
			if (index == 0) {
				index = k;
			}
		}
		cout << v[v.size() - 1] - v[0];
	}
	else {//모자란 경우->나눠담기 불가
		cout << -1;
	}
	return 0;
}