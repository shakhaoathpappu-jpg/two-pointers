#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    const int N = 1e7;
    vector<int> p;
    vector<bool> c(N + 1, false);
    for(int i = 2; i <= N; i++) {
        if(!c[i]) p.push_back(i);
        for(int j = 0; j < p.size() && 1LL * i * p[j] <= N; j++) {
            c[i * p[j]] = true;

            if(i % p[j] == 0) break;
        }
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll ans = 0;

        for(int i = 0; i < p.size() && p[i] <= n; i++) {
            ans += n / p[i];
        }
        cout << ans << endl;
    }
}