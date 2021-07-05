#include <bits/stdc++.h>
using namespace std;
#define ll long long
int k = 2;
#define mod 1000000007
vector<vector<ll> > multiply(vector<vector<ll> > &A, vector<vector<ll> > &B) 
{
	vector<vector<ll> > C(k, vector<ll>(k, 0));
	for(int i = 0; i < k; i++) 
    {
		for(int j = 0; j < k; j++) 
        {
			for(int x = 0; x < k; x++) 
            {
				C[i][j] = ((C[i][j]) + (A[i][x]*B[x][j])%mod)%mod;
			}
		}
    }
	return C;
}

void power(vector<vector<ll> > &A, int n) 
{
	if(n == 0 or n == 1) 
        return;
	power(A, n/2);
	A = multiply(A, A);
	if(n%2!=0){
		vector<vector<ll> > M {{0,1}, {1,1}};
		A = multiply(A , M);
	}
}

ll fib(int n) 
{
	vector<vector<ll> > A {{0,1}, {1,1}};
	if(n == 0) 
        return 0;
	power(A, n-1);
	
	ll f[2] = {0,1};
	return ((A[1][0]*f[0]) + (A[1][1]*f[1])%mod)%mod;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll res1 = fib(b+2);
        ll res2 = fib(a+1);
        ll res = (res1 - res2 + mod)%mod;
        cout<<res<<"\n";
    }
    return 0;
}
