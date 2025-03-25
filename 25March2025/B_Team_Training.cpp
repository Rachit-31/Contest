#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for (int i=0; i<n;i++) {
        cin >>a[i];
    }
    
    
    sort(a.begin(),a.end());
    
    int teams =0;
    int cnt =0;
    
   
    for (int i = n - 1; i >= 0; i--) {
        cnt++;
        if (cnt*a[i]>=x) {
            teams++;
            cnt =0; 
        }
    }
    
    cout<<teams<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}