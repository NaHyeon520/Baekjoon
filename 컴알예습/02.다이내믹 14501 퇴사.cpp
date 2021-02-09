#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* T = new int[n + 1];
	int* P = new int[n + 1];
	int* dp = new int[n + 1];

	for (int i = 1; i < n + 1; i++) {
		cin >> T[i];
		cin >> P[i];
		dp[i] = -1;
	}

	for (int i = 1; i < n + 1; i++) {
		if (T[i] > n + 1 - i)
			continue;
		for (int j = 1; j < i; j++) {
			if (i - j >= T[j]) {
				if (dp[i] > dp[j] + P[i])
					continue;
				else
					dp[i] = dp[j] + P[i];
			}
		}
		if (dp[i] < 0) {
			dp[i] = P[i];
		}
	}

	sort(dp, dp + n + 1);
	cout << dp[n];
	return 0;
}