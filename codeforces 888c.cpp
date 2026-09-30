#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s; cin >> s;
    int n = s.size();
    int ans = n;
    for(char c = 'a'; c <= 'z'; c++) {
        int last = -1;
        int mx = 0;
        bool ok = false;
        for(int i = 0; i < n; i++) {
            if(s[i] == c) {
                ok = true;
                mx = max(mx, i - last);
                last = i;
            }
        }
        if(!ok) continue;
        mx = max(mx, n - last);
        ans = min(ans, mx);
    }
    cout << ans << endl;
}