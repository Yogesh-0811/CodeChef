#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll score(vector<ll>& A,vector<ll>& B, int k){
    int N=A.size();
    ll score=0;
    bool flipped=false;
    
    for(int i=0;i<N;i++){
        ll a =flipped? B[i]:A[i];
        ll b =flipped? A[i]:B[i];
        
        if(a+k<b){
            flipped=!flipped;
            swap(a,b);
        }
        score+=a;
    }
    return score;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll>A(n);
        vector<ll>B(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int q;
        cin>>q;
        while(q--){
            int t,p;
            ll x;
            cin>>t>>p>>x;
            --p;
            if(t==1){
                A[p]=x;
            }else{
                B[p]=x;
            }
            cout<<score(A,B,k)<<endl;
        }
    }
    return 0;
}
