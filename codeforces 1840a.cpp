#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--){
        int n;
        string s; cin >> n >> s;
        int i = 0;
        while(i < n) {
            char x = s[i];
            cout << x;
            i++;
            while(x != s[i]) i++;
            i++;
        }
        cout << endl;
    }
}