#include <bits/stdc++.h>
using namespace std;
int atoi(string str)
{
    int res = 0;
    bool isNegative = false;
    for(int i = 0;i < str.size();i++){
        if(str[i] == '-'){
            isNegative = true;
            continue;
        }
        if(!isdigit(str[i]))
            return -1;
            
        res = (res*10 + (str[i] - '0'));
    }
    return isNegative ? -1*(int)res : res;
}
int main() {
    string str;
    cin>>str;
    cout<<atoi(str)<<"\n";
    return 0;
}
