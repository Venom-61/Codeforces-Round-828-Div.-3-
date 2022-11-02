#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Traffic Light

void solve() {
    int n; char c;
    cin >> n >> c;
    string s;
    cin >> s;

    if(c == 'g') {
        cout << "0\n";
        return ;
    }

    s += s;

    vector<int> green;
    for(int i = 0; i < 2 * n; i++) {
        if(s[i] == 'g')
            green.push_back(i);
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == c) {
            int lb = lower_bound(green.begin(), green.end(), i) - green.begin();
            ans = max(ans, green[lb] - i);
            
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
