#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>> pq(arr.begin(),arr.end());
    while(!pq.empty())
    {
        if(pq.size() == 1)
        {
            break;
        }
        int firstSmallest = pq.top();
        pq.pop();
        int secondSmallest = pq.top();
        pq.pop();

        int nextInsert = (3*firstSmallest + 2*secondSmallest)%100;
        pq.push(nextInsert);
    }
    cout<<pq.top()<<"\n";
    return 0;
}