#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int minVal = a[0], maxVal = a[0];
    int posMin = 0, posMax = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] < minVal) {
            minVal = a[i];
            posMin = i;
        } else if (a[i] == minVal) {
            posMin = i;
        }

        if (a[i] > maxVal) {
            maxVal = a[i];
            posMax = i;
        }
    }

    cout << posMin << " " << posMax << '\n';

    return 0;
}

