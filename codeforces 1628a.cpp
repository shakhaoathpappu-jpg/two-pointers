#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> cnt(n + 2, 0), suf(n + 1, 0);
        int m = 0;
        for(int i = n - 1; i >= 0; i--) {
            cnt[a[i]]++;

            while(cnt[m] > 0) m++;

            suf[i] = m;
        }
        vector<int> b;
        vector<int> seen(n + 2, 0);
        int stamp = 0, l = 0;
        while(l < n) {
            int target = suf[l];
            if(target == 0) {
                b.push_back(0);
                l++;
                continue;
            }
            stamp++;
            int cur = 0, r = l;
            while(r < n && cur < target) {
                if(a[r] < target && seen[a[r]] != stamp) {
                    seen[a[r]] = stamp;
                    while(cur < target && seen[cur] == stamp) cur++;
                }
                r++;
            }
            b.push_back(target);
            l = r;
        }
        cout << b.size() << endl;
        for(int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}