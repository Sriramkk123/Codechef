#include <bits/stdc++.h>
using namespace std;
struct Interval{
        int buy;
        int sell;
};
vector<vector<int> > stockBuySell(vector<int> A, int n){
    vector<vector<int>> res;
    if(n == 1)
        return res;
        
    int count = 0;
    Interval sol[n/2 + 1];
    
    int i = 0;
    while(i < n - 1){
        while((i < n - 1) && A[i] >= A[i+1])
            i++;
            
        if(i == n - 1)
            break;
            
        sol[count].buy = i++;
        
        while((i < n)&&A[i] >= A[i-1])
            i++;
            
        sol[count].sell = i - 1;
        count++;
    }
    
    if(count == 0)
        return res;
        
    for(int i = 0;i < count;i++){
        vector<int> temp;
        temp.push_back(sol[i].buy);
        temp.push_back(sol[i].sell);
        res.push_back(temp);
    } 
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    vector<vector<int>> res = stockBuySell(arr,n);
    for(int i = 0;i < res.size();i++){
        for(auto ele : res[i]){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}
