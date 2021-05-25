#include <bits/stdc++.h>
using namespace std;

void subArrayWithZeroSum(vector<int> arr)
{
    unordered_set<int> set;
    int sum = 0;
    for(int i = 0;i < arr.size();i++)
    {
        if(arr[i] == 0)
        {
            cout<<"Found";
            return;
        }
        sum += arr[i];
        if(sum == 0)
        {
            cout<<"Found";
            return;
        }
        if(set.find(sum) != set.end())
        {
            cout<<"Found";
            return;
        }
        set.insert(sum);
    }
    cout<<"Not found";
    return;
}
int main() {
	// your code goes here
	vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    subArrayWithZeroSum(arr);
	return 0;
}