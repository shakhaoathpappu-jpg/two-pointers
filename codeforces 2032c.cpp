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
        int ans = 2;
        int j = 1;
        for(int i = 0; i + 1 < n; i++) {
            if(j < i + 1) j = i + 1;
            while(j + 1 < n && a[i] + a[i + 1] > a[j + 1]) {
                j++;
            }
            ans = max(ans, j - i + 1);
        }
        cout << n - ans << endl;
    }
}