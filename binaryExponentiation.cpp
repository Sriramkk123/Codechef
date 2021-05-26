#include <bits/stdc++.h>
using namespace std;
long long calcPow(long long x,long long n)
{
    if(n == 0)
        return 1;

    long long ans = calcPow(x,floor(n/2));
    if(n&1)
        return ans*ans*x;
    return ans*ans;
}
long long calcPowWithoutRec(long long x,long long n)
{
    long long res = 1;
    while(n > 0)
    {
        if(n&1)
            res = res * x;
        x = x*x;
        n>>=1;
    }
    return res;
}
int main() {
    long long x,n;
    cin>>x>>n;
    cout<<calcPow(x,n)<<"\n";
    cout<<calcPowWithoutRec(x,n)<<"\n";
}
