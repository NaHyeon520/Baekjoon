#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long fibonacci[91];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	if (n == 0)
		cout << fibonacci[0] << endl;
	else if (n == 1)
		cout << fibonacci[1] << endl;
	else {
		for (int i = 2; i < 91; i++) {
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			if (i == n) {
				cout << fibonacci[i] << endl;
				break;
			}
		}
	}
	return 0;
}