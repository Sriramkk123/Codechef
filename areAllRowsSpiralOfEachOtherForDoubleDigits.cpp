#include <bits/stdc++.h>
using namespace std;
bool areAllRowsSpiralOfEachOther(vector<vector<int>> arr)
{
    string s = "";
    for(int i = 0;i < arr[0].size();i++)
        s += to_string(arr[0][i]) + "_";

    string concatstring = s + s;
    for(int i = 1;i < arr.size();i++)
    {
        string curr="";
        for(int j = 0;j < arr[0].size();j++)
        {
            curr += to_string(arr[i][j]) + "_";
        }
        if(concatstring.find(curr) == string::npos)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    cout<<areAllRowsSpiralOfEachOther(arr)<<"\n";
}