// More Cookies
// Alice, along with N of her friends, visited a bakery.
// There, Alice initially bought C cookies, and the i-th friend bought Ai cookies.

// Alice is quite competitive, so she'll only be happy if:
// 1> At least one friend has strictly less cookies than her; and
// 2> No other friend has equal cookies to her.
// What's the minimum number of extra cookies Alice must buy, to ensure that she's happy?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int more=0;
        while(true){
            int current = c+more;
            bool equal=false,less=false;
            
            for(int i=0;i<n;i++){
                if(A[i]==current) equal=true;
                if(A[i]<current) less=true;
            }
            
            if(!equal && less){
                cout<<more<<endl;
                break;
            }
            more++;
        }
    }
    return 0;
}