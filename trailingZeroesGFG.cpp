#include <bits/stdc++.h>
using namespace std;
int trailingZeroes(int N)
{
    int ans = 0;
    int p = 5;
    while((N/p) >= 1){
        ans += (N/p);
        p *= 5;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    cout<<trailingZeroes(n)<<"\n";
    return 0;
}
