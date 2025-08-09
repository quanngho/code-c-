#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
  	long long a[n];
  	for(int i = 0 ;i<n;i++){
  		cin >> a[i];
	  }
  	if(n<3) return 0;
  	for(int i =1 ; i<n-1;i++){
  		if(a[i] > a[i-1] && a[i] > a[i+1]) cout << a[i] << ' ';
	  }
  	return 0;
}

