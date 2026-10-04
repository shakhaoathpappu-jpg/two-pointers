#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> p(n, 0);
        int l = 1, r = n;
        for(int i = 0; i < k; i++) {
            bool small = (i % 2 == 0);
            for(int j = i; j < n; j += k) {
                if(small) p[j] = l++;
                else p[j] = r--;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}