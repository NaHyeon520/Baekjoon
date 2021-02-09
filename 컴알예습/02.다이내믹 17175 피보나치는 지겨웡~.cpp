#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int fibo[51];
	fibo[0] = 1;
	fibo[1] = 1;
	fibo[2] = 3;
	for (int i = 3; i < n + 1; i++) {
		fibo[i] = (fibo[i - 1] + fibo[i - 2] + 1) % 1000000007;
	}
	cout << fibo[n];
	return 0;
}