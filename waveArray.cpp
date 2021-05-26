#include<bits/stdc++.h>
using namespace std;
void printWave(vector<vector<int>> arr)
{
    for(int i = 0;i < arr[0].size();i++)
    {
        if(i&1)
        {
            for(int j = arr.size() - 1;j >= 0;j--)
                cout<<arr[j][i]<<" ";
        }
        else
        {
            for(int j = 0;j < arr.size();j++)
                cout<<arr[j][i]<<" ";
        }
    }
    return;
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    printWave(arr);
    return 0;
}