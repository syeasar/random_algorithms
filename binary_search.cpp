/*
problem link: https://codeforces.com/problemset/problem/1613/C
*/

#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, h, i;
        cin >> n >> h;
        vector <ll> a(n);
        for(i = 0; i < n; ++i) {
            cin >> a[i];
        }
        // binary search starts
        ll l, r, m;
        l = 1;
        r = 2*h;
        while(l <= r) {
            m = (l + r) / 2;
            ll sum = m;
            for(i = 1; i < n; ++i) {
                sum+= min(m, a[i] - a[i-1]);
            }
            if(sum < h) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        cout << l << endl;
        // binary search ends
    }
}
