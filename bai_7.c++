#include "bits/stdc++.h"

using namespace std;

int max (int arr[10000], int n) {
    int sum = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > sum) {
            sum = arr[i];
        }
    }
    return sum;
}

int main (void) {
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[10000];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    cout << max(a, n) << " " << max(b, m);
    return 0;
}