#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//실패. 파이썬으로 풀었음
int main() {
	int N, S, R;
	cin >> N >> S >> R;
	vector<int> damaged;
	vector<int> onemore;
	for (int i = 0; i < S; i++) {
		int temp;
		cin >> temp;
		damaged.push_back(temp);
	}
	for (int i = 0; i < R; i++) {
		int temp;
		cin >> temp;
		onemore.push_back(temp);
	}
	int count = S;
	vector<int>::iterator iter = onemore.begin();
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < R; j++) {
			if (damaged[i] == onemore[j]) {
				count--;
				onemore.erase(iter += j);
				R--;
				break;
			}
			else if (abs(damaged[i] - onemore[j]) == 1) {
				count--;
				onemore.erase(iter += j);
				R--;
				break;
			}
		}
	}
	cout << count;
	return 0;
}