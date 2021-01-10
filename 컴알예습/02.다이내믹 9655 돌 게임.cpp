#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 4 == 0)
		cout << "CY";
	else if (n % 4 == 1)
		cout << "SK";
	else if (n % 4 == 2)
		cout << "CY";
	else
		cout << "SK";
	return 0;
}