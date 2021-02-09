#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	unsigned long long arr[36] = { 0, };
	arr[0] = 1;
	arr[1] = 1;
	if (n == 0) {
		cout << 1;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		int i;
		for (i = 2; i <= n; i++) {
			if (i % 2 == 0) { //Â¦¼ö
				for (int j = 1; j <= i / 2; j++) {
					arr[i] += (2 * arr[j - 1] * arr[i - j]);
				}
			}
			else {//È¦¼ö
				for (int j = 1; j < i - (i / 2); j++) {
					arr[i] += (2 * arr[j - 1] * arr[i - j]);
				}
				arr[i] += (arr[i / 2] * arr[i / 2]);
			}
		}
		cout << arr[n];
	}
	return 0;
}