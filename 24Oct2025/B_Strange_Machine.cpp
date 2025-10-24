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

int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
bool prime(int n){
    if (n < 2)
        return false;
    for (int x = 2; x * x <= n; x++){
        if (n % x == 0)
            return false;
    }
    return true;
}
void ovi(vi &v){
    f(i,0,v.size()){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void ovc(vc &v){
    f(i,0,v.size()){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void ovs(vs &v){
    f(i,0,v.size()){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void ivi(vi &v){
    int n = v.size();
    f(i,0,n){
        in v[i];
    }
}
void ivc(vc &v){
    int n = v.size();
    f(i,0,n){
        in v[i];
    }
}
void ivs(vs &v){
    int n = v.size();
    f(i,0,n){
        in v[i];
    }
}

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

// void solve() {
//     int n, q;
//     in n>>q;

//     string s;
//     in s;

//     vi cnt(n);
//     int prev=0;
//     for(int i=n-1; i>=0; i--){
//         if(s[i]=='A'){
//             prev++;
//             cnt[i]= prev;
//         }
//         else{
//             prev=0;
//         }
//     }

//     vi a(q);
//     ivi(a);

//     for (int i = 0; i < q; i++) {
//         int x = a[i];
//         int steps = 0;
//         int idx = 0;

//         while (x > 0) {
//             if (s[idx] == 'B') {
//                 x /= 2;
//                 steps++;
//                 idx = (idx + 1) % n;
//             } else {
//                 int run = cnt[idx]; 
//                 int dec = min((long long)run, x); 
//                 x -= dec;
//                 steps += dec;
//                 idx = (idx + dec) % n;
//             }
//         }
//         out steps nl;
//     }
// }
void solve() {
    int n, q;
    in n >> q;

    string s;
    in s;

    bool hasB = (s.find('B') != string::npos);

    vi a(q);
    ivi(a);

    f(i, 0, q) {
        int x = a[i];
        int steps = 0;

        if (!hasB) {
            out x nl;
            continue;
        }

        int idx = 0;
        while (x > 0) {
            if (s[idx] == 'A') x -= 1;
            else x /= 2;
            steps++;
            idx = (idx + 1) % n;
        }
        out steps nl;
    }
}


int32_t main() {
    fast_io();
    int t;  
    cin >> t;  
    while (t--) {
        solve(); 
    }

    // solve();

    return 0; 
}