/*https://kwoncorin.tistory.com/51 참고*/

#include <iostream>
#include <cmath>
using namespace std;

char set[531441] = {};

void merge(int first, int last, int range) {
	if (range == 1) {
		set[first] = '-';
	}
	else {
		merge(first, first + (range / 3) - 1, range / 3);
		merge(last - ((range / 3) - 1), last, range / 3);
	}
}

int main() {
	int N;
	while (true) {
		cin >> N;
		if (cin.eof() == true)
			break;
		for (int i = 0; i < pow(3, N); i++) {
			set[i] = ' ';
		}
		merge(0, pow(3, N) - 1, pow(3,N));
		for (int i = 0; i < pow(3, N); i++) {
			cout << set[i];
		}
		cout << endl;
	}
	return 0;
}

/* 다른 버전 */
/*
#include <iostream>
#include <cmath>
using namespace std;

void DnC(int length) {
	if (length == 1) {
		cout << "-";
	}
	else {
		DnC(length / 3);
		for (int i = 0; i < length / 3; i++) {
			cout << " ";
		}
		DnC(length / 3);
	}
}

int main() {
	int N;
	while (true) {
		cin >> N;
		if (cin.eof() == true)
			break;
		DnC(pow(3, N));
		cout << endl;
	}
	return 0;
}
*/