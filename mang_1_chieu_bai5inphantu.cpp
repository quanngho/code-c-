#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n,d=0;
	cin >> n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int i=0 ; i< n;i++){
		if(i%2==0 && a[i]%2==0){
			cout << a[i] << ' ';
			d++;
		}
	}
	if(d==0) cout <<"NONE";
	return 0;
 }
