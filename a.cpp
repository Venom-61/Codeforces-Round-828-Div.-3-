#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Number Replacement

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;

    map<int, char> m;
    bool ok = true;
    for(int i = 0; i < n; i++) {
        if(m.find(a[i]) == m.end()) {
            m[a[i]] = s[i];
        } else {
            if(m[a[i]] == s[i])
                continue;
            else
                ok = false;
        }
    }

    /* for(auto p : m) { */
    /*     cout << p.first << " " << p.second << "\n"; */
    /* } */

    ok ? cout << "YES\n" : cout << "NO\n";
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
