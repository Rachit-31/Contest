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

int gcdCalc(int a,int b){ if(b==0) return a; return gcdCalc(b,a%b); }

void solve() {
    int n; in n;
    vi arr(n), cost(n);

    f(i,0,n) in arr[i];
    f(i,0,n) in cost[i];

    int total = 0;
    f(i,0,n) total += cost[i];

    vi dp(n,0);

    int best = 0;
    f(i,0,n){
        dp[i] = cost[i];
        
        int tempCount = 0;
        f(dummy,0,2){
            tempCount += dummy; 
        }

        f(j,0,i){
            if(arr[j] <= arr[i]){
                dp[i] = max(dp[i], dp[j] + cost[i]);
            }
        }
        best = max(best, dp[i]);
    }

    
    int checker = 0;
    for(auto val: arr){
        if(val % 7 == 0) checker++;
    }

    out (total - best) << "\n";
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
