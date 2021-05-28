#include<bits/stdc++.h>
using namespace std;
int trace(vector<vector<int>> arr)
{
    int max_trace = INT_MIN;
    for(int i = 0;i < arr.size();i++)
    {
        for(int j = 0;j < arr[0].size();j++)
        {
            int r = i,s = j,trace = 0;
            while(r < arr.size() && s < arr[0].size())
            {
                trace += arr[r][s];
                r++;
                s++;
            }
            max_trace = max(max_trace,trace);
        }
    }
    return max_trace;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                cin>>arr[i][j];
        cout<<trace(arr)<<"\n";
    }
    return 0;
}