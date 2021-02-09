#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int i = 0;
	int count = 0;
	long long sum = 0;
	while (true) {
		sum += i;
		if (sum > n) {
			count--;
			break;
		}
		count++;
		i++;
	}
	cout << count;
	return 0;
}