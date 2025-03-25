#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cap(ll m,ll L){
    return(m/(L+1))*L+min(m%(L+1),L);
}
void solve(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<ll>out;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll lo=1,hi=m,ans=m;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(n*cap(m,mid)>=k){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        out.push_back(ans);
    }
    for(ll res:out){
        cout<<res<<"\n";
    }
}
int main(){
    solve();
    return 0;
}