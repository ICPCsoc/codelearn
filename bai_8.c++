#include "bits/stdc++.h"

using namespace std;

int odd (int arr[1000], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            sum++;
        }
    }
    return sum;
}

int main (void) {
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << odd(a, n);
    return 0;
}