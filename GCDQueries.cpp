#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int arr[n];
	    for(int i = 0;i < n;i++)
	    {
	        cin>>arr[i];
	    }
	    int l,r;
	    int prefixGCD[n];
	    int suffixGCD[n];
	    prefixGCD[0] = arr[0];
	    suffixGCD[n-1] = arr[n-1];
	    for(int i = 1;i < n;i++)
	        prefixGCD[i] = __gcd(arr[i],prefixGCD[i-1]);
	    for(int i = n - 2;i >= 0;i--)
	        suffixGCD[i] = __gcd(arr[i],suffixGCD[i+1]);
	    for(int i = 0;i < q;i++)
	    {
	        cin>>l>>r;
	        l--;
	        r--;
	        if(l == 0)
	            cout<<suffixGCD[r+1]<<"\n";
	        else if(r == n-1)
	            cout<<prefixGCD[l-1]<<"\n";
	        else
	            cout<<__gcd(prefixGCD[l-1],suffixGCD[r+1])<<"\n";
	    }
	}
	return 0;
}

