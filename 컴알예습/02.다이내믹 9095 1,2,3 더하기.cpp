#include <iostream>
using namespace std;


int main() {
	int T;
	cin >> T;
	int dp[11];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 0; i < T; i++) {
		int temp;
		cin >> temp;
		for (int j = 4; j < temp + 1; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		cout << dp[temp] << "\n";
	}
	return 0;
}