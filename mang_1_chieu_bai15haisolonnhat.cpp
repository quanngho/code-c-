#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int max1 = -1, max2 = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > max1) {
            max2 = max1;
            max1 = a;
        } else if (a >= max2) {
            max2 = a;
        }
    }
    
    cout << max1 << " " << max2 << endl;
    return 0;
}

