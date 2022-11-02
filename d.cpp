#include<bits/stdc++.h>
using namespace std;

#define ll long long

// D. Divisibility by 2^n 
//

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        while(a[i] % 2 == 0) {
            cnt++;
            a[i] /= 2;
        }
    }

    vector<int> b;
    for(int i = 1; i <= n; i++) {
        int x = i, temp = 0;
        while(x % 2 == 0) {
            temp++;
            x /= 2;
        }
        b.push_back(temp);
    }
    sort(b.begin(), b.end(), greater<int>());
    
    if(cnt >= n) {
        cout << 0 << endl;
        return ;
    }

    int ans = 0;
    for(int i = 0; i < (int)b.size(); i++) {
        if(cnt + b[i] >= n) {
            cnt = n;
            ans++;
            break;
        }
        cnt += b[i];
        ans++;
    }
    if(cnt < n) cout << -1 << "\n";
    else cout << ans << "\n";

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
