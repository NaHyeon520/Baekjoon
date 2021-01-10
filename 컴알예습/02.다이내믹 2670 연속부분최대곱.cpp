#include <iostream>
#include <vector>
#include <stdio.h>
//2670 연속부분최대곱
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<double> v;
	for (int i = 0; i < N; i++) {
		double temp;
		cin >> temp;
		v.push_back(temp);
	}
	double max = -1;
	for (int i = 0; i < N; i++) {
		double temp = v[i];
		if (temp > max)
			max = temp;
		for (int j = i + 1; j < N; j++) {
			temp *= v[j];
			if (temp > max)
				max = temp;
		}
	}
	printf("%.3lf", max);
	return 0;
}