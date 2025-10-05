#include <bits/stdc++.h> 
using namespace std;     

#define int long long        
#define nl <<'\n'           

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#define sz(a) (int)a.size()
#define pii pair<int, int>

#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define mi map<int, int>
#define umi unordered_map<int, int>
#define umc unordered_map<char, int>
#define ums unordered_map<string, int>
#define si set<int>
#define sc set<char>

// functions
#define f(i,s,e) for(int i=s;i<e;i++)
#define cf(i,s,e) for(int i=s;i<=e;i++)
#define rf(i,e,s) for(int i=e;i>=s;i--)
#define pb push_back
#define bk back
#define F first
#define S second
#define in cin >>
#define out cout <<
#define spc <<" "

const int MOD = 1e9 + 7;      
const int INF = 1e18;  

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve() {
    int n, k;
    in n >> k;
    int tot = n * n;

    if (tot - k == 1) {
        no();
        return;
    }
    else if (tot == k) {
        yes();
        f(i,0,n) {
            f(j,0,n) cout << 'U';
            cout << '\n';
        }
        return;
    }
    else {
        int r = k / n;
        int c = k % n;
        vector<vc> ans(n, vc(n, 'D'));

        f(j,0,n-1) ans[n-1][j] = 'R';
        ans[n-1][n-1] = 'L';

        f(i,0,r) f(j,0,n) ans[i][j] = 'U';

        if (r < n) {
            f(j,0,c) ans[r][j] = 'U';
        }

        yes();
        f(i,0,n) {
            f(j,0,n) cout << ans[i][j];
            cout << '\n';
        }
    }
}

int32_t main() {
    fast_io();
    int t;  
    in t;  
    while (t--) {
        solve(); 
    }
    return 0; 
}
