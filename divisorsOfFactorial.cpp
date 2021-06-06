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
// void print_primes(int n)
// {
//     for(int i = 2;i < n;i++)
//         if(isPrime[i])
//             cout<<i<<" ";
// }
long long divisors(int n)
{
    long long res = 1;
    for(int i = 0;primes[i] <= n;i++)
    {
        int k = primes[i];
        long long count = 0;
        while((n/k) != 0)
        {
            count = (count + (n/k))%1000000007;
            k *= primes[i];
        }
        res = (res*(count + 1))%1000000007;
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    genrate_primes();
    cout<<divisors(n)<<"\n";
    return 0;
}
