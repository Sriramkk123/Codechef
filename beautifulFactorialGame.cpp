#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    int count = 1;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans = INT_MAX;
        for(int i = 2;i * i <= k;i++){
            ll countOfPowerOfK = 0;
            while(k%i == 0){
                countOfPowerOfK++;
                k/=i;
            }
            if(countOfPowerOfK == 0)
                continue;
            ll countInFactorial = 0;
            ll p = i;
            while(p <= n){
                countInFactorial += (n/p);
                p *= i;
            }
            ans = min(ans,countInFactorial/countOfPowerOfK);
        }
        if(k > 1){
            ll p = k;
            ll c2 = 0;
            while(p <= n){
                c2 += (n/p);
                p *= k;
            }
            ans = min(ans,c2);
        }
        if(ans == INT_MAX)
            ans = 0;
        cout<<"Case "<<count<<": "<<ans<<"\n";
        count++;
    }
    return 0;
}
