#include <bits/stdc++.h>
using namespace std;
bool check(long long x,long long y){
	if(x*y < 0 ) return true;
	return false;
}
int main() {
    long long n;
    cin >> n;
  	long long a[n];
  	for(int i = 0 ;i<n;i++){
  		cin >> a[i];
	  }
  	for(int i=0;i<n;i++){
  		if(i==0){
  			if(check(a[0],a[1])) cout << a[0]<<' ';
  			continue;
		  }
		else if (i == n-1) {
			if(check(a[n-1],a[n-2])) cout << a[n-1] << ' ';
			continue; 
		}
		else{
			if(check(a[i],a[i-1]) || check(a[i],a[i+1])) cout << a[i] << ' ';
		}
	  }
  	return 0;
}
