#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
  	long long a[n];
  	for(int i = 0 ;i<n;i++){
  		cin >> a[i];
	  }
  	for (int i = 0; i < n/2;i++){
  		long long temp = a[n-1-i];
  		a[n-1-i]=a[i];
  		a[i]= temp;
	  }
	  for(auto x : a){
	  	cout << x << ' ';
	  }
  	return 0;
}

