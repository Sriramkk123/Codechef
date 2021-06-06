#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
bitset<MAX> isPrime;
vector<int> primes;
void genrate_primes()
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2;i*i <= MAX;i++)
    {
        if(isPrime[i])
        {
            for(int j = i;j*i <= MAX;j++)
            {
                isPrime[j*i] = false;
            }
        }
    }
    for(int i = 2;i <= MAX;i++)
        if(isPrime[i])
            primes.push_back(i);
}
void segmented_sieve(long long a,long long b)
{
    vector<bool> segSieve(b-a+1,true);
    if(a == 1)
        a++;

    for(int i = 0;primes[i]*primes[i] <= b;i++)
    {
        long long p = primes[i];
        long long j = (a/p)*p;
        if(j < a)
            j += p;
        for(;j <= b;j+=p)
        {
            if(j != p)
                segSieve[j-a] = false;
        }
    }

    for(int i = a;i <= b;i++)
        if(i == 2  || segSieve[i-a] == true)
            cout<<i<<" ";
}
int main() {
    long long a,b;
    cin>>a>>b;
    genrate_primes();
    segmented_sieve(a,b);
    return 0;
}
