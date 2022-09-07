//220908
//백준 11651번 좌표 정렬하기 2 (실버 5)
//https://www.acmicpc.net/problem/11651

#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<int, int>> v;
	int n, x, y;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(y, x));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}