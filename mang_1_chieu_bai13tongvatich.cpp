#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	long long tong=0,tich=1;
	for(int i=0;i<n;i++){
		tong = (tong+a[i]) % mod;
		tich = (tich*a[i]) % mod;
	}
	cout << tong << endl <<tich;
    return 0;
}
