#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int> primes {2,3,5,7,11,13,17,19};
    while(t--){
        int n;
        cin>>n;
        long long ans = 0;
        long long subsets = (1 << 8) - 1;
        for(int i = 1;i <= subsets;i++){
            long long denominator = 1LL;
            long long setbits = __builtin_popcount(i);
            for(int j = 0;j <= 7;j++){
                cout<<(i&(i << j))<<" ";
                if(i&(1 << j)){
                    denominator *= primes[j];
                }
            }
            if(setbits&1)
                ans += n/denominator;
            else
                ans -= n/denominator;
            cout<<"\n"<<ans<<" \n";
        }
        cout<<ans<<"\n";
    }
}
