// Cloud Watching
// Chef believes he can predict the weather just by looking at clouds!

// Chef saw A clouds in the morning, and B clouds in the evening.
// He believes that it will rain if the number of clouds he saw in the evening is at least 3 times of the number of the clouds he saw in the morning.

// Given the values of A and B, what will Chef's prediction be?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    cin>>a>>b;
    if(b>=3*a){
        cout<<"Rain"<<endl;
    }else{
        cout<<"Dry"<<endl;
    }
    return 0;
}
