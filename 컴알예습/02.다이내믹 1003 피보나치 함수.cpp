#include <iostream>
#include <cstdio>
using namespace std;

int dp0[41];
int dp1[41];

int main() {
	int T;
	cin >> T;

	dp0[0] = 1;
	dp0[1] = 0;
	dp1[0] = 0;
	dp1[1] = 1;

	for (int j = 2; j <= 40; j++) {
		dp0[j] = dp0[j - 1] + dp0[j - 2];
		dp1[j] = dp1[j - 1] + dp1[j - 2];
	}

	for (int i = 0; i < T; i++) {
		int temp;
		cin >> temp;
		printf("%d %d\n", dp0[temp], dp1[temp]);
	}
	return 0;
}