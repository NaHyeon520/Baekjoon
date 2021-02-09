#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long fibo[117];
	fibo[1] = 1;
	fibo[2] = 1;
	fibo[3] = 1;
	for (int i = 4; i < n + 1; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 3];
	}
	cout << fibo[n];
	return 0;
}