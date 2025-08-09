#include<bits/stdc++.h>
using namespace std; 
int nt(int n){
	if(n<2) return 0;
	if(n == 2) return 2;
	for(int i=2; i*i <= n ; i++){
		if(n%i==0) return 0;
	}
	return n;
}
int main() {
	int n,s=0;
	float sum =0;
	cin >> n;
	for(int i = 0; i<n;i++){
		int x ;
		cin >> x;
		sum += nt(x);
		if(nt(x)) s++;
	}
	cout << fixed << setprecision(3)<< double(sum)/s;
	return 0;
 }

