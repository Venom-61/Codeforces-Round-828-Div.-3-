#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Even-Odd Increments

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    ll odd = 0, even = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 2 == 0)
            even++;
        else 
            odd++;
        sum += x; 
    }

    while(q--) {
        int x, y;
        cin >> x >> y;
        if(x == 0) {
            sum += even * y;
            if(y % 2 == 1) {
                odd += even;
                even = 0;
            }
        } else {
            sum += odd * y;
            if(y % 2 == 1) {
                even += odd;
                odd = 0;
            }
        }
        cout << sum << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
