#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans="";
    for(ll i=0;i<n;i++){
        ans.push_back('?');
    }
    ll start=0;
    ll end=n-1;
    ll count=0;
    for(ll i=0;i<k;i++){
        if(s[i]=='0'){
            ans[start]='-';
            start++;
        }
        else if(s[i]=='1'){
            ans[end]='-';
            end--;
        }
        else count++;
    }
    if(end-start+1==count){
        for(ll i=start;i<=end;i++){
            ans[i]='-';
        }
    }
    else {for(ll i=start+count;i<=end-count;i++){
        ans[i]='+';
    }}
    for(auto x:ans)cout<<x;
    cout<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) solve();
}