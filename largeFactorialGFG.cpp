#include <bits/stdc++.h>
using namespace std;
vector<long long> factorial(vector<long long> a, int n) {
        vector<long long> dp(1000005,1);
        for(int i = 1;i < 1000005;i++){
            dp[i] = (dp[i-1]*i)%1000000007;
        }
        vector<long long> res(n);
        for(int i = 0;i < n;i++){
            res[i] = dp[a[i]];
        }
        return res;
}
int main() {
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    vector<long long> res = factorial(arr,n);
    for(auto ele : res)
        cout<<ele<<" ";
    cout<<"\n";
    return 0;
}
