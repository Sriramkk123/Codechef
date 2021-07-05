#include <bits/stdc++.h>
using namespace std;
void solve(string s,int sleep){
    int i = 0;
    int len = s.size();
    int curr_sleep = 0;
    for(int i = 0;i < len;i++){
        if(s[i] == '0'){
            curr_sleep++;
        }else{
            if(curr_sleep >= sleep/2 + 1){
                sleep -= curr_sleep;
                sleep *= 2;
            }
            curr_sleep = 0;
        }
    }
    if(curr_sleep >= sleep/2 + 1 && sleep > 0){
        sleep -= curr_sleep;
        sleep *= 2;
    }
    if(sleep <= 0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int h,l;
        cin>>l>>h;
        string s;
        cin>>s;
        if(s.size() != l)
            cout<<"NO"<<"\n";
        else
            solve(s,h);
    }
    return 0;
}
