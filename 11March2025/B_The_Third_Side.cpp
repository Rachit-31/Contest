#include <bits/stdc++.h> 
using namespace std;     

#define int long long        
#define nl << '\n'           
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 

void solve() {
    int n;
    cin >> n;

    priority_queue<int> pq; 

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (pq.size() > 1) {
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();

        int newVal = t1 + t2 - 1; 
        pq.push(newVal);
    }

    cout << pq.top() << '\n';
}

int32_t main() {
    fast_io();
    int t;  
    cin >> t;  
    while (t--) {
        solve(); 
    }

    return 0; 
}
