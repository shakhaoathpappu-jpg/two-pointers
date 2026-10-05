#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(n);
        a[0] = 1;
        for(int i = 1; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i < n && a[i] < b[j]) {
                cnt++;
                i++;
            }
        }
        cout << n - cnt << endl;
    }
}