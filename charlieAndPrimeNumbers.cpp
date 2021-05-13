#include<iostream>
#include<vector>
using namespace std;
void prime_sieve(vector<long long> &primes)
{
	for(long long int i = 3;i < 10000005;i += 2)
		primes[i] = 1;
	for(long long int i = 3;i < 10000005; i +=2)
	{
		if(primes[i] == 1)
		{
			 for(long long int j = i*i;j < 10000005;j = j + i)
			 {
				 primes[j] = 0; 
			 }
		}
	}
	primes[2] = 1;
	primes[1] = 0;
	primes[0] = 0;
}
int main() {
	vector<long long>  primes(10000005,0);
	prime_sieve(primes);
	vector<long long>  csum(10000005,0);
    csum[2] = 2;
	for(int i = 3;i < 10000005;i++)
	{
        if(primes[i])
        {
            //cout<<"Adding "<<i<<" to sum"<<"\n";
		    csum[i] = csum[i-1] + i;
        }
        else
            csum[i] = csum[i-1]; 
	}
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
        // cout<<csum[b]<<" "<<csum[a]<<"\n";
		cout<<csum[b] - csum[a-1]<<"\n";
	}
	return 0;
}