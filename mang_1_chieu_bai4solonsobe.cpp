#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n,sl=0,sb=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[i] = x;
	}
 	int m;
 	cin >> m;
	for (int i = 0;i<n;i++){
		if(a[i] > m) sl++;
		if(a[i] < m) sb++;
	}
	cout << sb << endl << sl;
 }

