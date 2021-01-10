#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int first = n / 5;
	int last = (n % 5) / 2;
	if (n == 1 || n == 3) {
		cout << -1;
		return 0;
	}
	if (((n % 5) % 2) != 0) {
		first = (n / 5) - 1;
		last = (n - (first * 5)) / 2;
		if ((n - (first * 5)) % 2 != 0) {
			cout << -1;
			return 0;
		}
	}
	cout << first + last;
	return 0;
}