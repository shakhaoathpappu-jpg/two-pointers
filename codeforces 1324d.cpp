#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int n; cin >> n;
    vector<ll> a(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        ll b; cin >> b;
        c[i] = a[i] - b;
    }
    sort(c.begin(), c.end());
    ll ans = 0;
    int l = 0, r = n - 1;
    while(l < r) {
        if(c[l] + c[r] > 0) {
            ans += r - l;
            r--;
        }
        else l++;
    }
    cout << ans << endl;
}