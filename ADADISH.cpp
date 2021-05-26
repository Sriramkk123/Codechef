#include <bits/stdc++.h>
using namespace std;
int minTime(vector<int> arr)
{
    int burner1 = 0, burner2 = 0;
    sort(arr.begin(),arr.end());
    for(int i = arr.size() - 1;i >= 0;i--)
    {
        if(burner1 < burner2)
            burner1 += arr[i];
        else
            burner2 += arr[i];
    }
    return max(burner1,burner2);
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> arr;
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        cout<<minTime(arr)<<"\n";
    }
	return 0;
}