//Append Average

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        long long min1 = LLONG_MAX,min2 = LLONG_MAX;
        for(int i=0;i<n;i++){
            if(A[i]<min1){
                min2=min1;
                min1=A[i];
            }else if(A[i]<min2){
                min2=A[i];
            }
        }
        
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
        }
        
        while(k){
            long long avg = (min1+min2+1)/2;
            if(avg<min2){
                min2=avg;
                sum+=avg;
            }else{
                sum+=k*avg;
                break;
            }
            k--;
        }
        cout<<sum<<endl;
    }
    return 0;
}
