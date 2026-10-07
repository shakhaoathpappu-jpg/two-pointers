#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int p = n/2, c = n %2;
    int ans = INT_MAX;
    for(int t = 0; t <= c; t++) {
        int a = n - (t == 0 ? c : 0);
        int b = n - (t == 1 ? c : 0);
        
        for(int x = 0; x <= n + 1; x++) {
            for(int y = 0; y <= n + 1; y++) {
                if(2 * x + y < b) continue;
                int rem = max(0, a - x - 2 *y);
                int z = (rem + 2)/ 3;
                ans = min(ans, p + c + x + y + z);
                break;
            }
        }
    }
    cout << ans << endl;
}