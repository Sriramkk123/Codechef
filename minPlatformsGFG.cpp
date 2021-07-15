#include <bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n){
    	sort(arr,arr + n);
    	sort(dep,dep + n);
    	int platformNeeded = 1;
    	int result = 0;
    	int i = 1;
    	int j = 0;
    	while(i < n && j < n){
    	    if(arr[i] <= dep[j]){
    	        platformNeeded++;
    	        i++;
    	    }else if(arr[i] > dep[j]){
    	        platformNeeded--;
    	        j++;
    	    }
    	    
    	    result = max(result,platformNeeded);
    	}
    	return result;
    }
int main() {
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    for(int i = 0;i < n;i++)
        cin>>dep[i];
    cout<<findPlatform(arr,dep,n)<<"\n";
    return 0;
}
