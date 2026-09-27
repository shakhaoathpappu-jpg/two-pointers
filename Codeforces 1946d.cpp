#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector<int> s(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> s[i];
            s[i] ^= s[i - 1];
        }
        x++;
        int ans = -1;
        for(int i = 30; i >= 0; i--) {
            if((x >> i) & 1) {
                int msk = (1 << i);
                for(int j = i + 1; j < 30; j++) {
                    if(!((x >> j) & 1)) {
                        msk |= (1 << j);
                    }
                }
                int cnt = 0;
                for(int j = 1; j <= n; j++) {
                    if((s[j] & msk) == (s[n] & msk)) cnt++;
                }
                if((s[n] & msk) == 0) {
                    ans = max(ans, cnt);
                }
            }
        }
        cout << ans << endl;
    }
}