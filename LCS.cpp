#include<bits/stdc++.h>
using namespace std;
int LCS(string s,string t)
{
    vector<vector<int>> dp(s.size() + 1,vector<int>(t.size() + 1,0));
    for(int i = 0;i <= s.size();i++)
    {
        for(int j = 0;j <= t.size();j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;

            else if(s[i-1] == t[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];

            else
                dp[i][j] =  max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[s.size()][t.size()];
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<LCS(s1,s2)<<"\n";
    }
    return 0;
}