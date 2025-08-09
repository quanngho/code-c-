#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n;
	cin >> n;
	int a[n],min=INT_MAX;
	for(int i=0 ; i<n ;i++) {
		int x;
		cin >> x ;
		a[i] =x;
	}
	for (int i = 0 ; i < n -1 ; i++){
		for(int j=i+1;j<n;j++){
			int kc = abs(a[i]-a[j]);
			if( kc < min) min=kc;
		}
	}
	cout <<min;
	return 0;
 }

