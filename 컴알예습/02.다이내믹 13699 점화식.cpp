#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[36];
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
		for (i = 2; i < 18; i++) {
			if (n % 2 == 0) { //Â¦¼ö
				arr[i] = 2 * arr[i - 1] * arr[i - 2];
			}
			else {//È¦¼ö
				arr[i] = 2 * arr[i - 1] * arr[i - 2];
			}
			if (i == n) {
				break;
			}
		}
		cout << arr[i];
	}
	return 0;
}