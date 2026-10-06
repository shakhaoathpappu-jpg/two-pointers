#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n;
        ll k; cin >> n >> k;
        vector<ll> a;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            ll m = x % k;
            if(m != 0) a.push_back(k - m);
        }
        if(a.empty()) {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        int sz = a.size();
        for(int i = 0; i < sz; ) {
            int j = i;
            while(j < sz && a[j] == a[i]) j++;
            ll cnt = j - i;
            ans = max(ans, a[i] + (cnt - 1) * k + 1);
            i = j;
        }
        cout << ans << endl;
    }
}