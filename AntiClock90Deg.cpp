#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void AntiClock90(vector<vector<int>> arr)
{
    int n = arr.size();
    for(int i = 0;i < n;i++)
        reverse(arr[i].begin(),arr[i].end());
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < i;j++)
        {
            swap(&arr[i][j],&arr[j][i]);
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    AntiClock90(arr);
    return 0;
}