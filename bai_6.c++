#include "bits/stdc++.h"

using namespace std;

int sum (int arr[10000], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
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
    cout << sum (a, n);
    return 0;
}