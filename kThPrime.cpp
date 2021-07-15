#include <bits/stdc++.h>
using namespace std;
const int N = 86028121;
bool sieve[N+1];
vector<int> ds;
void createSieve(){
    for(int i = 2;i <= N;i++)
        sieve[i] = 1;

    for(int i = 2;i*i <= N;i++){
        if(sieve[i] == 1){
            for(int j = i*i;j <= N;j+=i){
               sieve[j] = 0;
            }
        }
    }
    for(int i = 2;i < N;i++){
        if(sieve[i]){
            ds.push_back(i);
        }
    }
}
int main() {
    createSieve();
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<ds[k-1]<<"\n";
    }
    return 0;
}
