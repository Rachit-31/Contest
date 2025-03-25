#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&vt){
    int count0=0,count1=0,count2=0,count3=0,count5=0;
    for(int i=0;i<vt.size();i++){
        if(vt[i]==0){
            count0++;
        }
        if(vt[i]==1){
            count1++;
        }
        if(vt[i]==2){
            count2++;
        }
        if(vt[i]==3){
            count3++;
        }
        if(vt[i]==5){
            count5++;
        }
        if(count0>=3 && count1>=1&& count2>=2&& count3>=1&& count5>=1){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vt(n);
        for(int i=0;i<n;i++){
          cin>>vt[i];
        }
        cout<<solve(vt)<<endl;
    }
    return 0;
}