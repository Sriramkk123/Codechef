#include <bits/stdc++.h>
using namespace std;
int smallestMissingPositive(vector<int> arr)
{
    for(int i = 0;i < arr.size();i++)
    {
        if(arr[i] <= 0 || arr[i] > arr.size())
            arr[i] = arr.size() + 1;
    }

    for(int i = 0;i < arr.size();i++)
    {
        int num = abs(arr[i]);
        if(num > arr.size())
            continue;

        num--;
        if(arr[num] > 0)
            arr[num] = -1*arr[num];
    }

    for(int i = 0;i < arr.size();i++)
    {
        if(arr[i] > 0)
            return i + 1;
    }

    return arr.size() + 1;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    cout<<smallestMissingPositive(arr)<<"\n";
}
