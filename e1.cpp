#include<bits/stdc++.h>
using namespace std;

#define ll long long

// E1. Divisible Numbers (easy version)

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<pair<ll, ll>> af, bf;
    for(int i = 1; i*i <= a; i++) {
        if(a % i == 0) {
            af.push_back({i, a/i});
            af.push_back({a/i, i});
        }
    }
    for(int i = 1; i * i <= b; i++) {
        if(b % i == 0) {
            bf.push_back({i, b/i});
            bf.push_back({b/i, i});
        }
    }

    for(auto p : af) {
        for(auto q : bf) {
            ll a1 = p.first, a2 = p.second;
            ll b1 = q.first, b2 = q.second;

            ll x = a1 * b1, y = a2 * b2;
            ll k1 =  a / x+1, k2 = b / y+1;

            if(k1 * x <= c and k2 * y <= d) {
                cout << k1*x << " " << k2*y << "\n";
                return ;
            }
        }
    }

    cout << -1 << " " << -1 << "\n";
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
