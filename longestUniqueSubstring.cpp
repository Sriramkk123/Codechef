#include <bits/stdc++.h>
using namespace std;
int longestUniqueSubsttr(string str){
        vector<int> dict(256, -1);
        int maxLen = 0;
        int start = -1;
        for (int i = 0; i < str.length(); i++) {
            if (dict[str[i]] > start){
                start = dict[str[i]];
            }
            dict[str[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
}
int main() {
    string s;
    cin>>s;
    cout<<longestUniqueSubsttr(s)<<"\n";
    return 0;
}
