#include <bits/stdc++.h>
using namespace std;
int bfIsNobleInteger(vector<int> a)
{
    unordered_map<int,int >mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    int sol=-1;
    sort(a.begin(),a.end());
    int n=a.size();
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==(n-i-mp[a[i]]))
            return 1;
    }
    return sol;
}

int isNobleInteger(vector<int> A)
{
    int maximum=*max_element(A.begin(),A.end());
    int freq[maximum+1]{};

    for(int i=0;i<A.size();i++)
        freq[A[i]]++;
        
    int sum=0;  
    for(int i=maximum;i>=0;i--)
    {
        if(freq[i] && i==sum)
            return 1;
            
        sum+=freq[i];
}

return -1;
}
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
    cout<<bfIsNobleInteger(arr)<<"\n";
    cout<<isNobleInteger(arr)<<"\n";
}
