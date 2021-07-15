#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n == 1){
            cout<<n<<"\n";
            continue;
        }
        map<int,int> mp;
        for(int i = 2;i*i <= n;i++){
            while(n%i == 0){
                mp[i]++;
                n/=i;
            }
        }
        if(n > 1){
            mp[n]++;
        }
        cout<<1<< " ";
        for(auto ele : mp){
            while(ele.second > 0){
                cout<<ele.first<<" ";
                ele.second--;
            }
        }
        cout<<"\n";
    }
    return 0;
}
