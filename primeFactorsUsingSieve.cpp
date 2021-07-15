#include <bits/stdc++.h>
using namespace std;
int spf[10000005];
void createSieve(){
    for(int i = 0;i < 10000005;i++)
        spf[i] = i;

    for(int i = 2;i*i <= 10000005;i++){
        if(spf[i] == i){
            for(int j = i*i;j <= 10000005;j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
}
int main() {
    createSieve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        while(n != 1){
            cout<<spf[n]<<" ";
            n /= spf[n];
        }
        cout<<"\n";
    }
    return 0;
}
