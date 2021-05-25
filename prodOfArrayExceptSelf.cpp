#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i < n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    vector<int> leftCompute(n);
    leftCompute[0] = 1;
    for(int i = 1;i < n;i++)
        leftCompute[i] = leftCompute[i-1]*arr[i-1];
    int k = 1;
    for(int i = n - 1;i >= 0;i--)
    {
        leftCompute[i]*= k;
        k *= arr[i];
    }
    
    for(int i = 0;i < n;i++)
        cout<<(leftCompute[i])<<" ";
    cout<<"\n";
}
