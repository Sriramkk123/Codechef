#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> powerSet(vector<int> arr)
{
    vector<vector<int>> res = {{}};
    for(int ele : arr)
    {
        int length = res.size();
        for(int i = 0;i < length;i++)
        {
            vector<int> current = res[i];
            current.push_back(ele);
            res.push_back(current);
        }
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++)
        {
            arr[i] = i + 1;
        }
        vector<vector<int>> res = powerSet(arr);
        for(int i = 0;i < res.size();i++)
        {
            for(auto ele : res[i])
                cout<<ele<<" ";
            cout<<"\n";
        }
    }
    return 0;
}