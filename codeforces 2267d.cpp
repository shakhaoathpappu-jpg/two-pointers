#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> p(n + 1);
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            p[x] = i % 2;
        }
        int l = 1, r = n;
        bool ok = true;
        for(int i = 1; i <= n && ok; i++) {
            if(p[i] == l % 2) l++;
            else if(p[i] == r % 2) r--;
            else ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}