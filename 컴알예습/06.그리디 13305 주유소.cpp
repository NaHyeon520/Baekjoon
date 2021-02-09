#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<unsigned long long> road;
	vector<unsigned long long> cost;
	unsigned long long total = 0;
	for (int i = 0; i < n - 1; i++) {
		unsigned long long a;
		cin >> a;
		road.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		unsigned long long a;
		cin >> a;
		cost.push_back(a);
	}
	for (int i = 0; i < cost.size() - 1; i++) {
		if (cost[i] < cost[i + 1]) {//다음 도시가 더 비싸면
			unsigned long long current = cost[i];
			unsigned long long length = road[i];
			while (cost[i + 1] > current) {
				length += road[i + 1];
				i++;
			}
			total += length * current;
		}
		else {//다음 도시가 더 싸면
			total += (cost[i] * road[i]);
		}
	}
	cout << total;
	return 0;
}