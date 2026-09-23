#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll b = a[0] + a[1];
        ll r = a[n - 1];
        if(r > b) {
            cout << "YES" << endl;
            continue;
        }
        int l = 2, x = n - 2;
        while(l < x) {
            b += a[l];
            r += a[x];

            if(r > b) {
                cout << "YES" << endl;
                break;
            }
            l++;
            x--;
        }
        if(l >= x) cout << "NO" << endl;
    }
}