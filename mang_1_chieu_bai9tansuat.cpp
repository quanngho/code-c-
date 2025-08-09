#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	map<int,int> mp;
	for(int i=0 ; i<n ;i++) {
		int x;
		cin >> x ;
		a[i] = x;
		mp[a[i]] ++;
	}
	for(int i = 0 ; i< n; i++){
		if(mp[a[i]] != 0){
			cout << a[i] << ' ' << mp[a[i]] <<endl;
			mp[a[i]]=0;
		}
	}
	return 0;
}

