\#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        unordered_map<int,int> first;
        for(int i = 0;i < n;i++)
        {
            int ele;
            cin>>ele;
            first[ele]++;
        }
        int res = 0;
        for(int i = 0;i < n;i++)
        {
            int ele;
            cin>>ele;
            if(first.find(ele) != first.end() && first[ele] != 0)
            {
                 res++;
                 first[ele] = 0;
            }
        }
        cout<<res<<"\n";
    }
	return 0;
}