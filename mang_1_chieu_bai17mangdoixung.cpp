#include <bits/stdc++.h>
using namespace std;
bool mtn(int* a,int n){
	for(int i = 0 ; i<n/2;i++){
		if(a[i] != a[n-1-i]) return false;
	}
	return true;
}
int main() {
    int n;
    cin >> n;
  	int a[n];
  	for(int i = 0 ;i<n;i++){
  		cin >> a[i];
	  }
  	if(mtn(a,n)) cout << "YES";
  	else cout << "NO";
  	return 0;
}

