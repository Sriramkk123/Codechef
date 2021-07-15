#include <bits/stdc++.h>
using namespace std;
long long findNth(long long N)
{
    long long baseTenNumber = N;
    long long baseNineNumber = 0;
    long long pos = 1;
    while(baseTenNumber > 0)
    {
        baseNineNumber += pos*(baseTenNumber%9);
        baseTenNumber /= 9;
        pos *= 10;
    }
    return baseNineNumber;
}
int main() {
    long long n;
    cin>>n;
    cout<<findNth(n);
    return 0;
}
