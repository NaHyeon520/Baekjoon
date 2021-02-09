#include <iostream>
#include <cmath>
using namespace std;


int main() {
	unsigned long long N;
	cin >> N;

	long long* dp = new long long[N + 1];

	for (unsigned long long i = 0; i < N + 1; i++) {
		dp[i] = 0;
	}

	for (int i = 2; i < N + 1; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = min(dp[i / 3] + 1, dp[i]);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		}
	}
	cout << dp[N];

	return 0;
}