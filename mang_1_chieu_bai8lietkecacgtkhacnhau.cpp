#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n;
	cin >> n;
	unordered_set<int> se;
	vector<int> result;
	for(int i=0 ; i<n ;i++) {
		int x;
		cin >> x ;
		if(se.count(x)==0){
			se.insert(x);
			result.push_back(x);
		}
	}
	for(auto x : result ) cout <<x <<' ';
	return 0;
 }
	
