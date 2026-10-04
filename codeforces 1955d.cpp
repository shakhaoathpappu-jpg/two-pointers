#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
int cntB[N], cntW[N];

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        
        for(int i = 0; i < m; i++) cntB[b[i]]++;
        int match = 0, ans = 0;
        int l = 0;
        for(int r = 0; r < n; r++) {
            if(cntW[a[r]] < cntB[a[r]]) match++;
            cntW[a[r]]++;
            if(r - l + 1 > m) {
                cntW[a[l]]--;
                if(cntW[a[l]] < cntB[a[l]]) match--;
                l++;
            }
            if(r - l + 1 == m && match >= k) ans++;
        }
        cout << ans << endl;
        for(int i = 0; i < m; i++) cntB[b[i]] = 0;
        for(int i = 0; i < n; i++) cntW[a[i]] = 0;
    }
}