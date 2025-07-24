//Sugar Limit

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        vector<int>B(n);
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        
        int maximum=0;
        for(int L=0;L<=100;L++){
            int S=0;
            for(int i=0;i<n;i++){
                if(B[i] <= L && A[i]>0){
                    S+=A[i];
                }
            }
            int current = S - L;
            maximum=max(maximum,current);
        }
        cout<<maximum<<endl;
    }
    return 0;
}