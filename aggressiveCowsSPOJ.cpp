#include <bits/stdc++.h>
using namespace std;
bool canPlace(vector<int> arr,int dist,int cows)
{
    int count = 1;
    int place = arr[0];
    for(int i = 1;i < arr.size();i++)
    {
        if(arr[i] - place >= dist)
        {
            count++;
            place = arr[i];
        }
        if(count == cows)
            return true;
    }
    return false;
}
int largestMinimumDistance(vector<int> arr,int k)
{
    int res = -1;
    sort(arr.begin(),arr.end());
    int left = arr[0];
    int right = arr[arr.size() - 1];
    while(left <= right)
    {
        int mid = left + (right-left)/2;
        if(canPlace(arr,mid,k))
        {
            res = mid;
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cout<<"\n"<<largestMinimumDistance(arr,k);
    }
}
