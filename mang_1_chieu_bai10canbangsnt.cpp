#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	vector<int> res;
	for (int i = 0; i < n; i++) {
		int sumLeft = 0, sumRight = 0;
		for (int j = 0; j < i; j++) sumLeft += a[j];
		for (int j = i + 1; j < n; j++) sumRight += a[j];

		if (isPrime(sumLeft) && isPrime(sumRight)) {
			res.push_back(i);
		}
	}

	for (int i = 0; i < res.size(); i++) {
		cout << res[i];
		if (i != res.size() - 1) cout << " ";
	}
	return 0;
}

