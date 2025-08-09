#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	int g=a[0];
	for(int i=1;i<n;i++){
		g = gcd(g,a[i]);
		}
	cout << g;
    return 0;
}

