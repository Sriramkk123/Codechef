#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
bitset<MAX> isPrime;
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
}
void print_primes(int n)
{
    for(int i = 2;i < n;i++)
        if(isPrime[i])
            cout<<i<<" ";
}
int main() {
    int n;
    cin>>n;
    genrate_primes();
    print_primes(n);
    return 0;
}
