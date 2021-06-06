#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
struct ex 
{
	ll x y, gcd;
};
ex extendedEuclid(ll a, ll b) 
{
	if(b == 0) {
		ex e;
		e.gcd = a;
		e.x = 1;
		e.y = 0;
		return e;
	}
	ex res = extendedEuclid(b, a%b);
	ex e;
	e.gcd = res.gcd;
	e.x = res.y;
	e.y = (res.x - (a/b)*res.y);
	return e;
}

ll modInverse(ll a, ll b) 
{
	ll x = extendedEuclid(a, b).x;
	return (x%b + b)%b;
}
int main() {
    int t;
	cin>>t;
	while(t--) 
    {
		int a, b, d;
		std::cin>>a>>b>>d;
		ll g = extendedEuclid(a, b).gcd;
		if(d%g != 0) 
        {
			std::cout<<0<<"\n";
		} 
        else if (d == 0) 
        {
			std::cout<<1<<"\n";
		} 
        else 
        {
			a /= g;
			b /= g;
			d /= g;
			ll y1 = ((d%a)*modInverse(b, a))%a;
			ll f = (d/b);
			if(d < y1*b) {
				std::cout<<0<<"\n";
			} else {
				ll n = (f - y1)/a;
				std::cout<<(n+1)<<"\n";
			}
		}
	}
    return 0;
}
