#include <bits/stdc++.h>
using namespace std;
int spf[10000005];
void createSieve(){
    for(int i = 2;i < 10000005;i++)
        spf[i] = 1;

    for(int i = 2;i*i <= 10000005;i++){
        if(spf[i] == 1){
            for(int j = i*i;j <= 10000005;j+=i){
                if(spf[j] != 0){
                    spf[j] = 0;
                    spf[i]++; 
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
        cout<<spf[n]<<"\n";
    }
    return 0;
}
