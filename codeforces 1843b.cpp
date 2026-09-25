#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int cnt = 0;
        int i = 0;
        while(i < n) {
            while(i < n && a[i] >= 0) i++;
            if(i >= n) break;
            cnt++;
            while(i < n && a[i] <= 0) i++;
        }
        cout << sum << " " << cnt << endl;
    }
}