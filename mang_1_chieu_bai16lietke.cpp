#include <bits/stdc++.h>
using namespace std;
bool nt(int n){
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
bool tn(int n){
	int original = n,reversed=0;
	while(n>0){
		reversed = reversed * 10 + n%10;
		n/=10;
	}
	return original == reversed;
}
bool cp(int n){
	int can = sqrt(n);
	return can*can == n ;
}
bool tnt(int n){
	int sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return nt(sum);
}
int main() {
    int n;
    cin >> n;
    int s1=0,s2=0,s3=0,s4=0;
  	vector<int> a(n);
  	for(int i = 0 ;i<n;i++){
  		cin >> a[i];
	  }
  	for(int i=0; i<n;i++){
  		if(nt(a[i])) s1++;
  		if(tn(a[i])) s2++;
  		if(cp(a[i])) s3++;
  		if(tnt(a[i])) s4++;
	  }
	  cout << s1 << endl << s2 <<endl << s3 << endl << s4;
    return 0;
}
