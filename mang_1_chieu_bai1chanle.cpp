#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n,sc=0,sl=0,tc=0,tl=0;
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		if(x%2==0){
			sc ++;
			tc+=x;
		}
		else{
			sl++;
			tl+=x;
		}
	}
	cout << sc <<endl;
	cout << sl <<endl;
	cout << tc <<endl;
	cout << tl << endl;
	return 0;
 }


