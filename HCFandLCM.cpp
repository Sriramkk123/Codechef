#include <bits/stdc++.h>
using namespace std;
void HCFandLCM(long long a,long long b)
{
    int gcd = __gcd(a,b);
    long long lcm = (a*b)/gcd;
    cout<<gcd<<" "<<lcm<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        long long a,b;
        cin>>a>>b;
        HCFandLCM(a,b);
    }
	return 0;
}

